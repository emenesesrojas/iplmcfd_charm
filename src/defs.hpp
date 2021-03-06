#ifndef IPLMCFD_DEFS_HPP_
#define IPLMCFD_DEFS_HPP_

#include <iostream>
#include <sstream>
#include <tvmet/Vector.h>
#include <vector>
#include <utility>
#include <boost/detail/endian.hpp>
#include <boost/array.hpp>
#include <numeric>
#include <chemkinpp/cpreactor.hpp>
#include <chemkinpp/thermomixture.hpp>

//!
//! \file defs.hpp
//! \brief Header for shared types
//!
//! # Nomenclature:
//!  - __Global ID__: A _globally_ unique positive integer representing a node
//!  - __Local ID__: A _locally_ unique positive integer representing a node
//!  - __index__: The cartesian (i,j,k) representation of a Global ID
//!
namespace iplmcfd {

  typedef double real;
  enum dimension_t { XDIM, YDIM, ZDIM, NDIM };

  //! Global ID type
  typedef std::size_t gid_t;
  //! Local ID type
  typedef std::size_t lid_t;
  //! real type (precision)
  typedef double real_t;
  // Chare id type
  typedef int chare_t;

  //! static size container
  typedef tvmet::Vector< std::size_t, NDIM > size_v;
  //! static index container
  typedef tvmet::Vector< std::size_t, NDIM > index_v;
  //! static vector of int
  typedef tvmet::Vector< int, NDIM > int_v;
  //! static vector of real_t
  typedef tvmet::Vector< real_t, NDIM > real_v;
  //! static vector of bool_t
  typedef tvmet::Vector< bool, NDIM > bool_v;

  //! maximum value for size_t
  const std::size_t MAX_SIZE = std::numeric_limits< std::size_t >::max();
  //! maximum value for real_t
  const real_t MAX_REAL = std::numeric_limits< real_t >::max();
  //! machine epsilon for real_t
  const real_t EPS_REAL = std::numeric_limits< real_t >::epsilon();

  //!
  typedef chemkinpp::cpreactor< real_t > cpr_t;
  //!
  typedef chemkinpp::thermomixture< real_t > mix_t;

  //! 

  //  +-------------+
  //  |  CONSTANTS  |
  //  +-------------+
  enum Directions { FORWARD, BACKWARD, NDIR };
  enum Boundaries { MIN, MAX, NFACE }; 

  //  +--------------------+
  //  |  UTILITY TYPEDEFS  |
  //  +--------------------+

  // overload for mytools::parameters
  template<class T, size_t sz>
  inline std::istream& operator>>(std::istream& in, tvmet::Vector<T,sz>& s)
  {
    for(size_t i=0; i<sz; ++i) in >> s[i];
    return in;
  }


  //  +---------------+
  //  |  ENDIAN-NESS  |
  //  +---------------+

  enum Endianness { BIG_Endian, LITTLE_Endian, UNKNOWN_Endian };
  const Endianness Endian = 
#  if defined(BOOST_LITTLE_ENDIAN)
#     define LMCFD_ENDIAN_S "little"
    LITTLE_Endian;
#  elif defined(BOOST_BIG_ENDIAN)
#     define LMCFD_ENDIAN_S "big"
    BIG_Endian;
#  else 
#     define LMCFD_ENDIAN_S "unknown"
    UNKNOWN_Endian;
#  endif

  //  +--------------+
  //  |  GET_BASE()  |
  //  +--------------+

  //! Get pointer to stored data, or NULL if empty
  /** A non-intrusive method which helps avoid constructs such as 
  v.empty() ? NULL : &v.front() which is used a lot for passing vectors to C-level functions. 
  */
  template<class T> inline
    typename T::const_pointer get_base( const T& v ) {
      return v.empty() ? NULL : &v[0]; // using operator[] to make sure it is []-addressable
  }
  template<class T> inline
    typename T::pointer get_base( T& v ) {
      return v.empty() ? NULL : &v[0]; // using operator[] to make sure it is []-addressable
  }
  template<class T, size_t N> inline
    T* get_base( boost::array<T,N>& a) {
      return a.data();
  }
  template<class T, size_t N> inline
    const T* get_base( const boost::array<T,N>& a) {
      return a.data();
  }

  /// For TVMET::Vector, it doesn't have lvalue [], nor ::pointer,
  /// so we can not use the generic ra-container overload above
  template<class T, size_t N> inline
    const T* get_base( const tvmet::Vector<T,N>& v) {
      return v.data();
  }
  template<class T, size_t N> inline
    T* get_base( tvmet::Vector<T,N>& v ) {
      return v.data();
  }

} // namespace iplmcfd


#endif // IPLMCFD_DEFS_HPP_
