#include "flamelet.hpp"
#include <sstream>

namespace iplmcfd {


//==============================================================================
flamelet::impl::impl(
   mix_t mix,
   const std::string& filename 
   ) 
   : m_mix(mix)
{
   using boost::throw_exception;
   using std::string;
   // 
   // Access file
   std::ifstream file( filename.c_str() );
   if (!file) throw_exception(std::invalid_argument(
      "Can not access `" + filename + "'."
      ));
   //
   // Read first line
   string line; getline(file, line);
   std::stringstream first_line(line);
   string fraction_type;
   real_t pressure; 
   first_line >> pressure >> fraction_type;
   if (first_line.fail()) throw_exception(std::logic_error(
      "Error parsing first line of the flamelet table."
      ));
   if (fraction_type!="molar" && fraction_type!="mass")  throw_exception(std::logic_error(
      "Error parsing first line of the flamelet table. Fraction type must be `molar' or `mass'"
      ));
   m_frac = fraction_type=="molar" ? MOLAR : MASS;
   m_pres = pressure * mix_t::atm2dynescc();
   //
   // Read the rest as a table
   m_tab.reset(new table_t(file));
   //
   // Set table indices
   m_if = m_tab->index("f");
   m_it = m_tab->index("T");
   m_ispec.resize(mix.nspec());
   for (size_t i=0; i!=mix.nspec(); ++i)
      m_ispec[i] = m_tab->index_nothrow(mix.species(i));

   // get RT and dRTdf
   m_irt = m_tab->index("RT");
   m_idrtdf = m_tab->index("dRTdf");
   // \todo if not given, generate RT and dRTdf
}


//==============================================================================
// FLAMELET::COMPOSITION
#define macro(ProbeT)                                           \
   void flamelet::impl::getcomp(                                \
      const ProbeT& p, real_t* phi                              \
      ) const                                                   \
   {                                                            \
      for (size_t i=0; i!=m_mix.nspec(); ++i)                   \
         phi[i] = m_ispec[i]<size_t(-1) ? p[m_ispec[i]] : real_t(0.);  \
   }
   macro(probe0_t);
   macro(probe1_t);
#undef macro
//------------------------------------------------------------------------------
#define macro(ProbeT)                           \
   void flamelet::composition(                  \
      const ProbeT& p, const Y_ar& Y            \
      ) const                                                        \
   {                                                                 \
      BOOST_ASSERT(Y.size() == pimpl->m_mix.nspec());                \
      pimpl->getcomp(p, reinterpret_cast<real_t*>(Y.data()));        \
                                                                     \
      if (pimpl->m_frac == impl::MOLAR)                              \
         pimpl->m_mix.convert( reinterpret_cast<const X_ar&>(Y), Y );   \
      pimpl->m_mix.normalize(Y);                                        \
   }                                                                    \
                                                                        \
   void flamelet::composition(                                          \
         const ProbeT& p, const X_ar& X                                 \
         ) const                                                        \
      {                                                                 \
         BOOST_ASSERT(X.size() == pimpl->m_mix.nspec());                \
         pimpl->getcomp(p, reinterpret_cast<real_t*>(X.data()));        \
                                                                        \
         if (pimpl->m_frac == impl::MASS)                               \
            pimpl->m_mix.convert( reinterpret_cast<const Y_ar&>(X), X ); \
                                                                        \
         pimpl->m_mix.normalize(X);                                     \
      }
   macro(probe0_t);
   macro(probe1_t);
#undef macro



} // namespace iplmcfd
