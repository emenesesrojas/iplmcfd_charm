#ifndef CFD_BLOCK_HPP
#define CFD_BLOCK_HPP

#include <fstream>
#include <boost/scoped_ptr.hpp>

#include "defs.hpp"
#include "simparam.hpp"
#include "domain.hpp"
#include "field.hpp"
#include "iplmc.hpp"
#include "cell.hpp"

using namespace iplmcfd;

// Block class
class Block: public CBase_Block {
	Block_SDAG_CODE
	
public:

	// constructor
	Block();
	// migration constructor
	Block(CkMigrateMessage* m);
	// destructor
	~Block();
	// pup function
	void pup(PUP::er &p);
	// cfd method
    void initialize();
    // rest of initialize method
	void initialize_end(real_t dt, real_t ke);
    // step method
    void step( std::size_t iter );
	// stemp middle method
    void step_middle( std::size_t iter );
    // rest of the step method
	void step_end(real_t dt, real_t ke);
    // output method
    void output( std::size_t iter );
    // output steps method
    void output_steps( std::ostream& out, std::size_t iter );
    // update time
    void update_time() { m_mc.update_time(); }
	// send particles
	void send_particles();
	// insert particles
	void insert_particles(std::vector<Particle> particles);
	// auxiliary function
	void print_cells();
	// reset output method
	void reset_output();

private:
	// reference to simparam (provided by Config group)
	const simparam& m_simparam;
	// reference to domain (provided by Config group)
	const Domain& m_domain;
	// subdomain (created for each chare)
	BlockSubdomain m_subdomain;
	// Iplmc object
	Iplmc m_mc;
	// output fields
	boost::scoped_ptr< Field > m_fields;
	// time step
	real_t m_dt;
	// wallclock time
	double m_step_wtime;
	double last_time;
	std::size_t iter_index, iter_end;
	int balance_init, balance_freq;
	int neighbors;
};

#endif
