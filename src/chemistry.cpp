//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include "chemistry.hpp"
//#include "tracer.hpp"
#include <boost/filesystem.hpp>
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
namespace iplmcfd {
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


inline Chemistry::impl::impl(mix_t m, flamelet_t f, reactor_t c)
   : m_mix(m)
   , m_fmlet(f)
   , m_cpr(c)
{
   //
   // Signature: $ separated species names 
   m_sig = "$";
   for(int i=0; i!=m.nspec(); ++i) 
      m_sig += m.species(i) + "$";
}


Chemistry::Chemistry()
{
//   tracer::scope _("chymia ctor");
   const simparam* p = &simparam::instance();

//   tracer::instance().range("chem files");
   namespace bf = boost::filesystem;
   enum {CHEM,THERM,TRAN,NFILE};
   bf::path files[] = {p->chem, p->chem_therm, p->chem_tran};

   for (int i=0; i!=3; ++i)
   {
     const bf::path& source = p->initial_path() / files[i];
      const bf::path& target = files[i];
      // source doesn't exists, just ignore (it could be nonfile input)
      if ( !bf::exists(source) ) 
	continue;

      // remove target if already there
      if ( bf::exists(target) ) 
         // do not remove if the target is the same file
         // happens when there are no process-rank enumerated dirs (as in ipfd)
         if( bf::equivalent( source, target ) )
            continue;
         else
            bf::remove( target );

      // now clean slate, copy the file
      bf::copy_file( source, target );
   }
   mix_t mix( p->chem, p->chem_therm, p->chem_tran );

//   tracer::instance().range("flamelet");
   flamelet_t fmlet;
/*HERE    if ( std::ifstream("flamelet_table.in") ) 
      fmlet.set(mix, "flamelet_table.in");
   
   // TODO Check flamelet table species against mix species!"
HERE*/
//   tracer::instance().range("CP reactor");
   reactor_t cpr(mix);
   cpr.solver(p->chem_solver);
   cpr.reltol(p->chem_reltol);
   cpr.abstol(p->chem_abstol);
/*HERE   if (  p->chem_isatetol > 0 )
      cpr.isatetol(p->chem_isatetol);

   // set reference mixtures (required if ISAT is to be used as solver)
   // The one that specified in parameters and its equilibrium 
   reactor_t::full_composition& compo = cpr.ref_comp(0);
   compo.T = p->ref_T;
   compo.p = p->ref_p;
   std::fill ( compo.X.begin(), compo.X.end(), real(0) );
   BOOST_FOREACH( simparam::name_value_map::const_reference nv, p->ref_species )
     compo.X[ mix.index(nv.first) ] = nv.second;

   mix.normalize(compo.X);
      
   reactor_t::full_composition& ceqpo = cpr.ref_comp(1);
   ceqpo = compo;
   mix.equil( ceqpo.X, ceqpo.p, ceqpo.T );
HERE */
   //
   pimpl.reset(new impl(mix,fmlet,cpr));
}



} // namespace iplmcfd
