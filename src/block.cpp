#include "particle.hpp"
#include "cfd.decl.h"
#include "block.hpp"
#include "config.hpp"

extern /* readonly */ CProxy_Config groupProxy;
extern /* readonly */ CProxy_Main mainProxy;
extern /* readonly */ int chares_x;
extern /* readonly */ int chares_y;
extern /* readonly */ int chares_z;

using namespace iplmcfd;

// constructor
Block::Block()
	: m_simparam(groupProxy.ckLocalBranch()->get_simparam()),
	m_domain(groupProxy.ckLocalBranch()->get_domain()),
	m_subdomain(BlockSubdomain(m_simparam,m_domain,BoxPattern(1),m_domain.ind2chare(int_v(thisIndex.x,thisIndex.y,thisIndex.z)),chares_x*chares_y*chares_z)),
	m_mc(m_simparam,m_domain,m_subdomain)
{

	// Charm++ initilization
	__sdag_init();
	usesAtSync = true;
	iter_end = m_simparam.iter_end;
	balance_init = m_simparam.balance_init;
	balance_freq = m_simparam.balance_freq;
	neighbors = m_subdomain.nneigh_subdomains();
}

// migration constructor
Block::Block(CkMigrateMessage* m): CBase_Block(m),
	m_simparam(groupProxy.ckLocalBranch()->get_simparam()),
	m_domain(groupProxy.ckLocalBranch()->get_domain()),
	m_subdomain(BlockSubdomain(m_simparam,m_domain,BoxPattern(1),m_domain.ind2chare(int_v(thisIndex.x,thisIndex.y,thisIndex.z)),chares_x*chares_y*chares_z)),
	m_mc(m_simparam,m_domain,m_subdomain)
{ 
}

// destructor
Block::~Block() {}
	
// pup function
void Block::pup(PUP::er &p){
	int size;
	CBase_Block::pup(p);
	__sdag_pup(p);

	m_mc.pup(p);
	p | m_dt;
	p | iter_index;
	p | iter_end;
	p | balance_init;
	p | balance_freq;
	p | neighbors; 
}

// initialize method
void Block::initialize(){

	m_mc.initialize();
	m_mc.update_dt();

	real_t dt = m_mc.dt();
	contribute(sizeof(real_t), &dt,
        CkReduction::min_double, CkCallback(CkReductionTarget(Main, reduce_dt), mainProxy));
	real_t ke = m_mc.ke();
    contribute(sizeof(real_t), &ke,
        CkReduction::sum_double, CkCallback(CkReductionTarget(Main, reduce_ke), mainProxy));
}

// rest of the initialize method
void Block::initialize_end(real_t dt, real_t ke){
	m_mc.update_dt_end(dt,ke);
	m_dt = dt;
    /*
     * After initialization we can register fields and create our initial
     * parallel io class.  These need reset after each repartitioning step
     */
	reset_output();
}

// reset output method
void Block::reset_output(){
    m_fields.reset( new Field );
    m_mc.register_fields( *m_fields );
}


// step method  
void Block::step( std::size_t iter ){
	m_mc.position_step( m_dt, iter );

	// send messages to neighbors
	send_particles();
}

// step middle method
void Block::step_middle(std::size_t iter){
	m_mc.position_step_end();

	m_mc.scalar_step( m_dt, iter );

	m_mc.update_dt();

	real_t dt = m_mc.dt();
    contribute(sizeof(real_t), &dt,
        CkReduction::min_double, CkCallback(CkReductionTarget(Main, reduce_dt), mainProxy));
	real_t ke = m_mc.ke();
    contribute(sizeof(real_t), &ke,
        CkReduction::sum_double, CkCallback(CkReductionTarget(Main, reduce_ke), mainProxy));
}

void Block::step_end(real_t dt, real_t ke){
	m_mc.update_dt_end(dt,ke);
	m_dt = dt;
    /*
     * update_dt() ends with an all_reduce which is implicitly blocking.
     * Thus, this is a good location for iteration timing.
     */
    m_step_wtime = CmiWallTimer() - last_time;
    last_time    = CmiWallTimer();
}

// send particles to neighbors
void Block::send_particles(){
	
	// traversing the list of neighbors and sending each a message with migrating particles
	BOOST_FOREACH( Subdomain::chare_gid_s_mp::const_reference chare_gidlst, m_subdomain.neigh_legs() ) {
		chare_t chare_id = chare_gidlst.first;
		Subdomain::gid_s cell_set = chare_gidlst.second;
		std::vector<Particle> part_vector;
		
		// traversing all the cells to add all particles bound to the same chare
		BOOST_FOREACH( iplmcfd::gid_t cell_id, cell_set ) {
			BOOST_FOREACH( Particle particle, m_mc.neigh_cells().find(cell_id)->second.incoming() ) {
				particle.cell = cell_id;
				part_vector.push_back(particle);
			}
		}

//CkPrintf("Sending %d particles\n",part_vector.size());

		// sending message to chare
		index_v index = m_domain.chare2ind(chare_id);
		int tmp = part_vector.size();
		thisProxy(index[XDIM],index[YDIM],index[ZDIM]).receive_particles(part_vector);
	}
}

// particle inserting method
void Block::insert_particles(std::vector<Particle> particles){
	// iterate over the particle array, inserting each particle in the corresponding cell
	//CkPrintf("Inserting %d particles\n",particles.size());
	for(int i=0; i<particles.size(); i++){
		iplmcfd::gid_t index = particles[i].cell;
		iplmcfd::Cell::particle_lst part_list = m_mc.cells().find(index)->second.incoming();
		assert(m_mc.cells().find(index) != m_mc.cells().end());
		part_list.push_back(particles[i]);
	}
}

// output method  
void Block::output( std::size_t iter ){
    m_mc.update_fields();
}

// output steps method  
void Block::output_steps( std::ostream& out, std::size_t iter ){

    static bool first_call = true;

    if ( thisIndex.x != 0 || thisIndex.y != 0 || thisIndex.z != 0 ) 
      return;

    if ( first_call )
    {
      out << std::setw(6)  << "iter"  << " ";
      out << std::setw(12) << "time"  << " ";
      out << std::setw(12) << "dt"    << " ";
      out << std::setw(12) << "ke"    << " ";
      out << std::setw(12) << "wtime" << std::endl;
      
      first_call = false;
    }

    out << std::setw(6)  << iter << " ";
    out << std::setw(12) << m_mc.time() << " ";
    out << std::setw(12) << m_dt << " ";
    out << std::setw(12) << m_mc.ke() << " ";
    out << std::setw(12) << m_step_wtime << std::endl;
}

// Auxiliary function
void Block::print_cells(){
	CkPrintf("CHARE <%d,%d,%d> -> %d\n",thisIndex.x,thisIndex.y,thisIndex.z,m_domain.ind2chare(int_v(thisIndex.x,thisIndex.y,thisIndex.z)));
	m_mc.print_cells();
}

