#ifndef IPLMCFD_PARTICLE_HPP_
#define IPLMCFD_PARTICLE_HPP_

#include <boost/static_assert.hpp>
//#include <pup.h>
#include <pup.h>

#include "defs.hpp"
#include "chemistry.hpp"

namespace iplmcfd {

  //!
  //! \file particle.hpp
  //! \struct Particle
  //! \brief
  //!
  struct Particle
  {

    //!
    static const std::size_t FIXED_NUM_REALS = 
      1 +    // mass
      NDIM + // [x,y,z]
      1 +    // f
      1;     // srt

    //!
    //! \brief
    //!
    static int fixed_num_bytes() { return FIXED_NUM_REALS * sizeof( real_t ); }

    //!
    //! \brief
    //!
    static int fixed_num_reals() { return FIXED_NUM_REALS; }

    //!
    //!
    //!
    Particle( const mix_t& mix ) : phi( mix ), srt(0) { }
	Particle(): phi(Chemistry::instance().mixture()), srt(0) { } 

	//!
    //! \brief
    //!
    const real_t* first_fixed_member() const { return &mass; }

	void pup(PUP::er &p){
	//	int size = phi.size();
		//p | size;
		//if(p.isUnpacking()){
		//	phi.resize(size);
		//}
		for(int i=0; i<phi.size(); i++)
			p | phi[i];
		//std::vector<double> extra;
		//extra = phi;
	//	p | extra;
		//p | phi;
		p | mass;
		for(int i=0; i<X.size(); i++)
			p | X[i];
		p | f;
		p | srt;
		p | cell;
	}

    cpr_t::phi phi;  //!< composition [Y1, Y2, ... Ynspec, T]
    real_t     mass; //!< mass
    real_v     X;    //!< position 
    real_t     f;    //!< mixture fraction
    real_t     srt;  //!< RT source
	gid_t      cell; // ID of containing cell
  };


  BOOST_STATIC_ASSERT( 
    ( Particle::FIXED_NUM_REALS * sizeof( real_t ) + 
    sizeof( cpr_t::phi ) ) <= sizeof( Particle )
    );

} // namespace iplmcfd

#endif // IPLMCFD_PARTICLE_HPP_
