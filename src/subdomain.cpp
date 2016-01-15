#include "subdomain.hpp"

#include <algorithm>
#include <vector>
#include <stdexcept>
#include <cassert>
#include <boost/foreach.hpp>
#include "pattern.hpp"

namespace iplmcfd {

  std::ostream& operator<<( std::ostream& out, const Subdomain::adj_mp& graph )
  {

    BOOST_FOREACH( Subdomain::adj_mp::const_reference gid_neighlst, graph )
    {
      out << gid_neighlst.first << " ";
      for ( std::size_t i=0; i<gid_neighlst.second.size(); i++ )
        out << gid_neighlst.second[i] << " ";
      out << std::endl;
    }
    return out;

  }

  // +------------------------------+
  // | Subdomain::build_local_graph |
  // +------------------------------+
  void Subdomain::_build_local_graph( const std::vector< chare_t >& colors )
  {

    // get homes
    for (gid_t I=0; I<colors.size(); ++I)
    {
      // if the vertex's color indicates it is not a home vertex, we are not
      // interested in it here.
      if ( colors[I] != _chare ) continue;

      _homes[I] = 0;
    }

    // enumerate local ids
    lid_t i = 0;
    BOOST_FOREACH( gidlid_mp::reference gidlid, _homes )
      gidlid.second = i++;

    // warn about empty partitions
    if ( _homes.size() == 0 )
      std::cerr << "Iplmcfd::Subdomain warning: " <<
      "Zero nodes in partition " << _chare << std::endl;

    // build neighbor dependency graph
    BOOST_FOREACH( gidlid_mp::const_reference gidlid, _homes )
    {
      gid_t I = gidlid.first;
      index_v index = _domain.gid2ind( I );

      // loop through stencil points
      std::vector< int_v > stencil = _pattern.elements();
      _adj[I].reserve( stencil.size() );
      for ( std::size_t i=0; i<stencil.size(); i++ )
      {

        int_v neigh_index( index + stencil[i] );
        gid_t Ineigh = _domain.ind2gid( neigh_index );

        if ( _domain.out_of_bounds( Ineigh ) ) continue;

        _adj[I].push_back( Ineigh );

        if ( colors[Ineigh] == _chare ) continue;

        // it is a neighbor
        _neighs.insert( gidchare_mp::value_type( Ineigh, colors[Ineigh] ) );
        _home_legs[ colors[Ineigh] ].insert( I );
        _neigh_legs[ colors[Ineigh] ].insert( Ineigh );
        
      }

    } // foreach

    assert( _home_legs.size() == _neigh_legs.size() );


    /*
    // output neighbor info
    if ( _chare == 0 )
    {

      // output colors
      for ( std::size_t i=0; i<colors.size(); i++ )
        std::cout << i << " " << colors[i] << std::endl;
      
      std::cout << " 0: HOME - NEIGH LEG PAIRS " << std::endl;
      BOOST_FOREACH( gidgid_mp::const_reference home_neigh, home_neigh_legs )
        std::cout << home_neigh.first << " " << home_neigh.second << std::endl;

      BOOST_FOREACH( chare_gid_s_mp::const_reference chare_set, _home_legs )
      {
        std::cout << " 0: HOME_LEGS: " << chare_set.first << "(chare): ";
        BOOST_FOREACH( gid_t homegid, chare_set.second )
          std::cout << homegid << " ";
        std::cout << std::endl;
      }

      BOOST_FOREACH( chare_gid_s_mp::const_reference chare_set, _neigh_legs )
      {
        std::cout << " 0: NEIGH_LEGS: " << chare_set.first << "(chare): ";
        BOOST_FOREACH( gid_t neighgid, chare_set.second )
          std::cout << neighgid << " ";
        std::cout << std::endl;
      }

    }
    MPI_Barrier( MPI_COMM_WORLD );
    if ( _chare == 1 )
    {

      std::cout << " 1: HOME - NEIGH LEG PAIRS " << std::endl;
      BOOST_FOREACH( gidgid_mp::const_reference home_neigh, home_neigh_legs )
        std::cout << home_neigh.first << " " << home_neigh.second << std::endl;

      BOOST_FOREACH( chare_gid_s_mp::const_reference chare_set, _home_legs )
      {
        std::cout << " 1: HOME_LEGS: " << chare_set.first << "(chare): ";
        BOOST_FOREACH( gid_t homegid, chare_set.second )
          std::cout << homegid << " ";
        std::cout << std::endl;
      }

      BOOST_FOREACH( chare_gid_s_mp::const_reference chare_set, _neigh_legs )
      {
        std::cout << " 1: NEIGH_LEGS: " << chare_set.first << "(chare): ";
        BOOST_FOREACH( gid_t neighgid, chare_set.second )
          std::cout << neighgid << " ";
        std::cout << std::endl;
      }

    }

    */


  }

  // +--------------------------------+
  // | BlockSubdomain::BlockSubdomain |
  // +--------------------------------+
  BlockSubdomain::BlockSubdomain( 
    const simparam& param, 
    const Domain& d,
	const Pattern& pat,
	chare_t c,
	int npart) 
    : Subdomain( param, d, pat, c )
  {

    const int_v& nchares = _simparam.nchares;
    if ( npart != tvmet::product( nchares ) )
    {
      std::ostringstream err;
      err << "Chare Array size is: " << npart << " Size requested by user is: ";
      err << tvmet::product( nchares ) << std::endl;
      throw std::invalid_argument( err.str() );
    }

    // allocate colors
    std::vector< chare_t > colors( d.npoints(), MAX_SIZE );

    // get decomposition
    _decomp( colors );

    // set the homes
    _build_local_graph( colors );

  }

  // +------------------------+
  // | BlockSubdomain::decomp |
  // +------------------------+
  void BlockSubdomain::_decomp( std::vector< chare_t >& colors )
  {

    // determine number of FD points in each decomposition
    const int_v& nchares = _simparam.nchares;
    int local_remainder;

    // XDIM 
    std::vector<int> local_nx( nchares[XDIM] );
    for (int i=0; i<nchares[XDIM]; ++i)
      local_nx[i] = _domain.shape()[XDIM] / nchares[XDIM];
    // add any remainder to front
    local_remainder = _domain.shape()[XDIM] % nchares[XDIM];
    for (int i=0; i<local_remainder; ++i) local_nx[i]++;

    // YDIM 
    std::vector<int> local_ny( nchares[YDIM] );
    for (int i=0; i<nchares[YDIM]; ++i)
      local_ny[i] = _domain.shape()[YDIM] / nchares[YDIM];
    // add any remainder to back
    local_remainder = _domain.shape()[YDIM] % nchares[YDIM];
    for (int i=0; i<local_remainder; ++i) local_ny[ nchares[YDIM]-1-i ]++;

    // ZDIM 
    std::vector<int> local_nz( nchares[ZDIM] );
    for (int i=0; i<nchares[ZDIM]; ++i)
      local_nz[i] = _domain.shape()[ZDIM] / nchares[ZDIM];
    // add any remainder to front
    local_remainder = _domain.shape()[ZDIM] % nchares[ZDIM];
    for (int i=0; i<local_remainder; ++i) local_nz[i]++;

    // get start and end subscripts for each subdomain
    std::vector<int> istart( nchares[XDIM], 0 );
    std::vector<int> iend( nchares[XDIM], 0 );
    istart[0] = 0;
    iend[0]   = local_nx[0];
    for (int i=1; i<nchares[XDIM]; ++i)
    {
      istart[i] = iend[i-1];
      iend[i]   = istart[i] + local_nx[i];
    }

    std::vector<int> jstart( nchares[YDIM], 0 );
    std::vector<int> jend( nchares[YDIM], 0 );
    jstart[0] = 0;
    jend[0]   = local_ny[0];
    for (int j=1; j<nchares[YDIM]; ++j)
    {
      jstart[j] = jend[j-1];
      jend[j]   = jstart[j] + local_ny[j];
    }

    std::vector<int> kstart( nchares[ZDIM], 0 );
    std::vector<int> kend( nchares[ZDIM], 0 );
    kstart[0] = 0;
    kend[0]   = local_nz[0];
    for (int k=1; k<nchares[ZDIM]; ++k)
    {
      kstart[k] = kend[k-1];
      kend[k]   = kstart[k] + local_nz[k];
    }

    // populate colors array (assumes Fortran ordering, first index fastest)
    chare_t color = 0;
    for (int kproc=0; kproc<nchares[ZDIM]; ++kproc) {
      for (int jproc=0; jproc<nchares[YDIM]; ++jproc) {
        for (int iproc=0; iproc<nchares[XDIM]; ++iproc) {
          for (int i=istart[iproc]; i<iend[iproc]; ++i) {
            for (int j=jstart[jproc]; j<jend[jproc]; ++j) {
              for (int k=kstart[kproc]; k<kend[kproc]; ++k)
              {
                int_v sub(i,j,k);
                colors[ _domain.ind2gid(sub) ] = color;
              } // k
            } // j
          } // i
          ++color;
        } // kproc
      } // jproc
    } // iproc

  }

 
} // namespace iplmcfd
