#ifndef IPLMCFD_SIMPARAM_HPP_
#define IPLMCFD_SIMPARAM_HPP_

#include "defs.hpp"

#include <map>
#include <vector>
#include <string>
#include <set>
#include <boost/array.hpp>
#include <boost/filesystem/path.hpp>
#include <tvmet/Matrix.h>

namespace iplmcfd {

  /** \brief Process simulation parameters
  * \ingroup singleton
  * \todo For a restarting simulation implement parameter consistency checks
  * \todo Rename ngrid to ncell (this is how it is interpreted in the rest of the code!)
  */
  class simparam
  {
    // Using Singleton interface
    simparam(int argc, char* argv[]);
    ~simparam(){};

  public:
    static const simparam& instance(int argc=0, char* argv[] = 0) {
      static simparam singleton(argc, argv);
      return singleton;
    }

  public:
    class not_initialized : public std::exception 
    {
    public: 
      not_initialized () {} 
      virtual const char* what() const throw()
      { return "first call to simparam should include commandline arguments"; }
    };


    // DATA MEMBERS (all read-only)
  public:

    typedef std::map<std::string, real_t > name_value_map;

    std::string filename;

    // +-----------------------+
    // | simulation parameters |
    // +-----------------------+
    bool restart;
    int iter_end;
    real_t time_end;
    real_t walltime;
    real_t Re;
    real_t Re_lambda;

    // +--------------------+
    // | Charm++ parameters |
    // +--------------------+
    int chares_x;
    int chares_y;
    int chares_z;
	int_v nchares;
	int balance_init;
	int balance_freq;

    // +--------------------------+
    // | decomposition parameters |
    // +--------------------------+
    bool save_cpuload;
    std::string decomp_type;
    int_v ncores;

    // +---------------------+
    // | geometry parameters |
    // +---------------------+
    int_v ppc;
    bool use_clone_cluster;
    real_v xmin;
    real_v xmax;
    size_v ngrid;
    bool_v periods;

	// +----------------------+
	// | reference parameters |
	// +----------------------+
	real ref_L;
	real ref_U;
	real ref_T;
	real ref_p;
	name_value_map ref_species;

    // +------------------------------+
    // | constants & model parameters |
    // +------------------------------+
    real_t Comega;
    real_t Sc;
    real_t mu_power;
    real_t stable;

    // +--------------------------+
    // | I/O and trace parameters |
    // +--------------------------+
    size_t iter_fdump;
    size_t iter_output_steps;
    bool  trace_flush;
    size_t trace_flush_iter;
    std::set<int> trace_ranks;
    bool carlo_log_flush;
    int  carlo_log_level;

    // +----------------------+
    // | chemistry parameters |
    // +----------------------+
    std::string chem;
    std::string chem_type;
    std::string chem_solver;
    real_t chem_reltol;
    real_t chem_abstol;
    real_t chem_isatetol;
    int chem_rxnstart;
    int chem_rxnend;
    std::string chem_tran;
    std::string chem_therm;

    // THIS STUFF REQUIRES SOME TLC
    // +-----------------------+
    // | hidden and hard-coded |
    // +-----------------------+
    // for now this is just a catch-all of things I don't want to deal with
    // work on this crap
    bool debug_wait;

    // save root path
    const boost::filesystem::path& initial_path() const { return m_initial_path; }

   private:

     void display_input_params() const;

     boost::filesystem::path m_initial_path; 

   };

} // namespace iplmcfd


#endif // IPLMCFD_SIMPARAM_HPP_
