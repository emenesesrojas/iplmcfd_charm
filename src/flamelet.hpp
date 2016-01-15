#ifndef IPLMCFD_FLAMELET_HPP_
#define IPLMCFD_FLAMELET_HPP_

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include "defs.hpp"
#include <chemkinpp/thermomixture.hpp>
#include <mytools/numeric/tabulardata.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <vector>
#include <string>
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
namespace iplmcfd {
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class flamelet
{
public:
   typedef real real_t;
   typedef chemkinpp::thermomixture<real_t> mix_t;
   typedef mix_t::mass_fractions_ref Y_ar;
   typedef mix_t::mole_fractions_ref X_ar;
   typedef mix_t::temperature T_t;
   typedef mix_t::pressure P_t;
   typedef mytools::numeric::tabulardata<real_t> table_t;
   typedef table_t::probe_nearest probe0_t;
   typedef table_t::probe_linear  probe1_t;


   // IMPL ---------------------------------------------------------------------
private:
   struct impl
   {
      impl(mix_t, const std::string&);
      void getcomp(const probe0_t&, real_t*) const;
      void getcomp(const probe1_t&, real_t*) const;
      //
      enum FractionType {MOLAR, MASS};
      FractionType m_frac;
      P_t m_pres;
      boost::scoped_ptr<table_t> m_tab;
      size_t m_if;
      size_t m_it;
      size_t m_irt;
      size_t m_idrtdf;
      mix_t  m_mix;
      std::vector<size_t> m_ispec;
   };
   boost::shared_ptr<impl> pimpl;
   bool null;

   // INTERFACE ----------------------------------------------------------------
public:
   explicit flamelet() : null(true) {}
   flamelet(mix_t m, const std::string& ffile)  : pimpl(new impl(m, ffile)) { null = false; }
   void set(mix_t m, const std::string& ffile) { pimpl.reset(new impl(m,ffile)); null = false; }
   void probe(real_t f, probe0_t& p) const { pimpl->m_tab->probe(f,p); }
   void probe(real_t f, probe1_t& p) const { pimpl->m_tab->probe(f,p); } 
   operator bool() const                   { return !null; }
   probe0_t probe0(real_t f) const         { probe0_t p; probe(f,p); return p;}
   probe1_t probe1(real_t f) const         { probe1_t p; probe(f,p); return p;}
   P_t pressure() const                    { return P_t(pimpl->m_pres);  }
   T_t T(const probe0_t& p) const          { return T_t(p[pimpl->m_it]); }
   T_t T(const probe1_t& p) const          { return T_t(p[pimpl->m_it]); }
   real_t RT(const probe0_t& p) const          { return p[pimpl->m_irt]; }
   real_t RT(const probe1_t& p) const          { return p[pimpl->m_irt]; }
   real_t dRTdf(const probe0_t& p ) const  { return p[pimpl->m_idrtdf]; }
   real_t dRTdf(const probe1_t& p ) const  { return p[pimpl->m_idrtdf]; }
   void composition(const probe0_t& p, const Y_ar& Y) const;
   void composition(const probe0_t& p, const X_ar& X) const;
   void composition(const probe1_t& p, const Y_ar& Y) const;
   void composition(const probe1_t& p, const X_ar& X) const;
};


} // namespace iplmcfd


#endif // IPLMCFD_FLAMELET_HPP_
