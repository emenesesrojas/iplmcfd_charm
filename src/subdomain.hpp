#ifndef IPLMCFD_SUBDOMAIN_HPP_
#define IPLMCFD_SUBDOMAIN_HPP_

#include <map>
#include <set>
#include <vector>

#include "defs.hpp"
#include "simparam.hpp"
#include "domain.hpp"
#include "pattern.hpp"

namespace iplmcfd
{

  //!
  //! \file subdomain.hpp
  //! \class Subdomain
  //! \brief Performs domain decomposition and stores information about the 
  //!        resulting local partition
  //!
  //! # Nomenclature:
  //!  - __homes__: The nodes assigned to this partition
  //!
  class Subdomain
  {

  public:

    //! Global ID, Local ID map type
    typedef std::map< gid_t, lid_t > gidlid_mp;
    //! Global ID, chare map type
    typedef std::map< gid_t, chare_t > gidchare_mp;
    //! Global ID set type
	typedef std::set< gid_t > gid_s;
    //! Neighboring subdomain chare, global ID set map
    typedef std::map< chare_t, gid_s > chare_gid_s_mp;
    
    //! \todo DOCUMENT
    //! \todo adj_mp should be composed of a set, not vector
    typedef std::map< gid_t, std::vector< int > > adj_mp;

  public:

    //!
    //! \brief Construct Subdomain
    //!
    //! \param[in] p Simulation parameters reference
    //! \param[in] d Domain reference 
    //!
    Subdomain( 
      const simparam& p, 
      const Domain& d,
	  const Pattern& pat,
	  chare_t c)
      : _simparam( p ), _domain( d ), _pattern(pat), _chare(c)
    {}
    
    //!
    //! \brief Get the number of nodes that call this subdomain home
    //!
    //! \returns the number of nodes
    //!
    std::size_t nhomes() const {  return _homes.size(); }

    //!
    //! \brief Get the global ID to local ID map for home nodes
    //!
    //! \returns the global ID to local ID map of home nodes
    //!
    const gidlid_mp& homes() const { return _homes; }

    //!
    //! \brief Get the number of neighboring nodes
    //!
    //! \returns the number of neighboring nodes
    //!
    std::size_t nneighs() const { return _neighs.size(); }

    //!
    //! \brief Get the global ID set of neighbor nodes
    //!
    //! \returns set of global IDs of neighboring nodes
    //!
    const gidchare_mp& neighs() const { return _neighs; }
    
    //!
    //! \brief Get the set of home node gids mapped to chare of each 
    //!        communication neighbor
    //!
    //! \returns
    //!
    const chare_gid_s_mp& home_legs() const { return _home_legs; }

    //!
    //! \brief Get the set of ghost (neighbor) node gids mapped to chare of 
    //!        owning process
    //!
    //! \returns
    //!
    const chare_gid_s_mp& neigh_legs() const { return _neigh_legs; }

    //!
    //! \brief Get the number of neighboring subdomains
    //!
    //! \returns
    //!
    std::size_t nneigh_subdomains() const { return _home_legs.size(); }

    //!
    //! \brief Get chare ID that owns this subdomain instance
    //!
    //! \returns chare ID
    //!
    chare_t my_chare() const { return _chare; }

    //!
    //! \brief Get the adjacency list
    //!
    //! \returns reference to adjacency list
    //!
    const adj_mp& adj() const { return _adj; }

    //!
    //! \brief Output the adjacency graph (useful for debug)
    //!
    friend std::ostream& operator<<( std::ostream& out, const adj_mp& graph );

  protected:

    //!
    //! \brief Decomposes the domain
    //!
    //! \params[out] colors chare ID for _every_ Global ID
    //!
    virtual void _decomp( std::vector< chare_t >& colors ) = 0;

    //!
    //! \brief Determines home and neighbor nodes.  Builds neighbor dependency
    //!        graph.
    //!
    //! \param[in] colors chare ID for _every_ Global ID
    //!
    void _build_local_graph( const std::vector< chare_t >& colors );

  protected:

    //! Simulation parameters reference
    const simparam& _simparam;
    //! Domain reference
    const Domain& _domain;
    //! Reference to communication pattern
    const Pattern& _pattern;
    //! Chare ID
    chare_t _chare;     
    //! global ID, local ID map of nodes
    gidlid_mp _homes; 
    //! global ID set of neighbor nodes
    gidchare_mp _neighs;
    //! set of home node gids mapped to chare of communication neighbor
    chare_gid_s_mp _home_legs;
    //! set of ghost (neighbor) node gids mapped to chare of owner
    chare_gid_s_mp _neigh_legs;


    //! \todo DOCUMENT
    adj_mp _adj;

  };


  //!
  //! \class BlockSubdomain
  //! \brief Create a subdomain based on a block uniform decomposition
  //!
  class BlockSubdomain : public Subdomain
  {

  public:
    
    //!
    //! \brief Construct BlockSubdomain
    //!
    //! \param[in] p Simulation parameters reference
    //! \param[in] d Domain reference 
    //!
    BlockSubdomain( 
      const simparam& p, 
      const Domain& d, 
	  const Pattern& pat,
      chare_t c,
	  int nparts);

  protected:

    //!
    //! \brief Calculate the block uniform decomposition
    //!
    //! \param[out] colors chare ID for _every_ Global ID
    //!
    //! \todo clean up the block decomposition code
    //!
    void _decomp( std::vector< chare_t >& colors ); 

  };


} // namespace iplmcfd

#endif // IPLMCFD_SUBDOMAIN_HPP_
