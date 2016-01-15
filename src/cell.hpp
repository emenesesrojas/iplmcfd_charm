#ifndef IPLMCFD_CELL_HPP_
#define IPLMCFD_CELL_HPP_

#include <list>
#include <boost/array.hpp>
#include <pup.h>
#include <pup_stl.h>

#include "defs.hpp"
#include "domain.hpp"
//#include "binary_stream.hpp"
#include "particle.hpp"
#include "scalar_averages.hpp"

namespace iplmcfd 
{

  //!
  //! \file cell.hpp
  //! \class Cell
  //! \brief
  //!
  class Cell
  {

  public:

    //!
    typedef std::list< Particle > particle_lst;
    //!
    typedef particle_lst::iterator particle_it;
    //!
    typedef particle_lst::const_iterator particle_cit;
    //!
    enum {NCORNER=8, NSIDE=6, NEDGE=12, NNEIGHBOR=26};
    
    //!
    struct Counters
    {
      typedef size_t counter_t;

      void reset();

      //! number of counters
      enum { CLONED, MERGED, WENTOUT, CAMEIN, IN, CHEMLOAD, CPUTIME, NCOUNTS }; 
      
      Counters() 
        : cloned(0), 
        merged(0), 
        wentout(0), 
        camein(0), 
        in(0), 
        chemload(0), 
        cputime(0) 
      {}

      size_t cloned;   //!<
      size_t merged;   //!<
      size_t wentout;  //!<
      size_t camein;   //!<
      size_t in;       //!<
      size_t chemload; //!<
      size_t cputime;  //!< in mili seconds

    };

  public:
    
    //!
    //! \brief
    //!
    Cell( const mix_t& mix ) : m_chem(mix), scalars( mix ) {}
    Cell() : m_chem(Chemistry::instance().mixture()), scalars(Chemistry::instance().mixture()) {}

    //!
    //! \brief Get list of particles contained by the cell
    //!
    const particle_lst& contained() const { return m_contained; }

    //!
    //! \brief Modify list of particles contained by the cell
    //!
    particle_lst& contained() { return m_contained; }

    //!
    //! \brief Get list of particles entering the cell
    //!
    const particle_lst& incoming() const { return m_incoming; }

    //!
    //! \brief Modify list of particles entering cell
    //!
    particle_lst& incoming() { return m_incoming; }
    
    //!
    //! \brief Tranfser ownership of particles
    //!
    //! Claim new particles from incoming by splicing all in incoming into 
    //!   contained
    //!
    void own_incoming();
    
    //!
    //! Enforce particle cloning and maximum number density control
    //!
    void adjust_population(const size_t min_ppc, const size_t mean_ppc, const size_t max_ppc);

	void pup(PUP::er &p);

  public:
    
    //!
    Counters ctr;
    //!
    ScalarAverages scalars;
    //!
    real_t mass;
  
  private:
    //!
    particle_lst m_contained;
    //!
    particle_lst m_incoming;  
	//!
    const mix_t &m_chem;
  };
  
  //! +--------------------+
  //! | Cell::own_incoming |
  //! +--------------------+
  inline void Cell::own_incoming()
  {
    ctr.camein += m_incoming.size();
    m_contained.splice( m_contained.begin(), m_incoming );
  }

  //!
  //! Transfer a single particle from one cell to another
  //!
  inline void transfer( Cell::particle_it p, Cell& old_host, Cell& new_host )
  {
    new_host.incoming().splice(
      new_host.incoming().begin(), old_host.contained(), p
      );
  }

  //! +-----------------------+
  //! | Cell::Counters::reset |
  //! +-----------------------+
  inline void Cell::Counters::reset() 
  {
    cloned   = 0;
    merged   = 0;
    wentout  = 0;
    camein   = 0;
    in       = 0;
    chemload = 0;
    cputime  = 0;
  }

} // namespace iplmcfd

#endif // IPLMCFD_CELL_HPP_
