#ifndef IPLMCFD_CHEMISTRY_HPP_
#define IPLMCFD_CHEMISTRY_HPP_


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include "defs.hpp"
#include "simparam.hpp"
#include "flamelet.hpp"
#include <chemkinpp/thermomixture.hpp>
#include <chemkinpp/cpreactor.hpp>
#include <boost/scoped_ptr.hpp>
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
namespace iplmcfd {
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


/** \brief Chemistry functionality. 

Implements chemical reactions, etc. interface for iplmcfd, using Chemkin++ as the workhorse.

\ingroup singleton

 */ 
   
class Chemistry 
{
public: 
   typedef chemkinpp::thermomixture<real> mix_t;
   typedef mix_t::massfrac phi_t;
   typedef mix_t::temperature T_t;
   typedef mix_t::pressure P_t;
   typedef mix_t::density  rho_t;
   typedef chemkinpp::cpreactor<real> reactor_t;
   typedef reactor_t::phi  phi_a;
   typedef flamelet flamelet_t;

   // SINGLETON ----------------------------------------------------------------
private:   
   Chemistry();
   ~Chemistry(){};
public:
   static Chemistry& instance() { static Chemistry singleton; return singleton; }



private:      
   struct impl {
      impl(mix_t, flamelet_t, reactor_t);
      mix_t    m_mix;
      flamelet m_fmlet;
      reactor_t m_cpr;
      std::string m_sig;
   };

   // INTERFACE ----------------------------------------------------------------
public:
   //! Return a signature (hopefully) unique for underlying chemical kinetics
   const std::string& signature() const { return pimpl->m_sig; }
   //! Access to individual components
   const mix_t& mixture() const { return pimpl->m_mix; }
   const flamelet_t&  flamelet() const { BOOST_ASSERT( pimpl->m_fmlet); return pimpl->m_fmlet; }
   const reactor_t& reactor()  const { return pimpl->m_cpr;   }
   reactor_t& reactor()  { return pimpl->m_cpr;   }
  

   // DATA MEMBERS -------------------------------------------------------------
private:
   boost::shared_ptr<impl> pimpl;
};







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
} // namespace iplmcfd
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#endif // IPLMCFD_CHEMISTRY_HPP_
