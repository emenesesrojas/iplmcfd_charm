#include "domain.hpp"

#include <cmath>

namespace iplmcfd {

  // +----------------+
  // | Domain::Domain |
  // +----------------+
  Domain::Domain( const simparam& param ) 
  {
    m_periods = param.periods;
    m_shape   = param.ngrid;
    m_xmin    = param.xmin;
    m_xmax    = param.xmax;

    // calculate dx
    for (int i=0; i<NDIM; ++i)
    {
      if ( m_periods[i] )
        m_dx[i] = ( m_xmax[i] - m_xmin[i] ) / m_shape[i];
      else
        m_dx[i] = ( m_xmax[i] - m_xmin[i] ) / ( m_shape[i] - 1 );
    }

    m_delta = 2 * std::sqrt( m_dx[XDIM] * m_dx[YDIM] );

    m_h = 1 / m_dx;
    m_indsub.set_shape(m_shape);

	// setting chareind shape
	size_v m_chareshape(param.chares_x,param.chares_y,param.chares_z);
	m_chareind.set_shape(m_chareshape);
  }

} // namespace iplmcfd
