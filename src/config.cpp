#include "particle.hpp"
#include "cfd.decl.h"
#include "config.hpp"
#include "chemistry.hpp"
#include <mytools/filesystem/change_directory.hpp>

// Default constructor
Config::Config(){}	

// Initializes simulation parameters and creates directories
void Config::start(ConfigMessage *m){

	// building simparam 
	const simparam& p = simparam::instance(m->argc,m->argv);
	
	// creating a directory for each PE
	boost::filesystem::path root_dir = create_pe_dir();	
	
	// building domain
	domain = new Domain(p);

	// creating Chemistry static objects
	Chemistry::instance();

	// reducing to main chare
	contribute();
}

// Creates a directory for each PE
boost::filesystem::path Config::create_pe_dir(){

  // store root directory of the simulation, 
  // it will be changed below to pe enumerated dirs
  namespace bf = boost::filesystem;
  bf::path root_dir = bf::current_path();
  const bf::path& source_therm = root_dir / "therm.dat";
  const bf::path& source_tran  = root_dir / "tran.dat";
  const bf::path& target_therm = "therm.dat";
  const bf::path& target_tran  = "tran.dat";
  {
    bf::path rundir = bf::path("p") / 
      boost::lexical_cast< std::string >( CkMyPe() );

    bf::create_directory("p");
    bf::create_directory(rundir);

    // Change directory for further computation
    mytools::filesystem::change_directory(rundir);

    // copy files
    if ( bf::exists( source_therm ) )
    {
      if ( bf::exists( target_therm ) ) bf::remove( target_therm );
      bf::copy_file( source_therm, target_therm );
    }

    if ( bf::exists( source_tran ) )
    {
      if ( bf::exists( target_tran ) ) bf::remove( target_tran );
      bf::copy_file( source_tran,  target_tran  );
    }
  }

  return root_dir;
}

// Returns a reference to the domain
Domain &Config::get_domain(){
	return *domain;
}

// Returns a reference to the domain
const simparam &Config::get_simparam(){
	return simparam::instance();
}

// Destructor	
Config::~Config(){
}

