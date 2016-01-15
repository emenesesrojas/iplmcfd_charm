# +-------------+
# | PROJECT CFD |
# +-------------+
project( CFD CXX C )
cmake_minimum_required( VERSION 2.8.8 )

# +------------------------------+
# | CHECK NATIVE FORTRAN SUPPORT |
# +------------------------------+
include( CheckLanguage )
check_language( Fortran )
if( CMAKE_Fortran_COMPILER )
  enable_language( Fortran )
endif()

# +----------+
# | PACKAGES |
# +----------+
set(ENV{BOOST_ROOT} /opt/apps/intel13/boost/1.51.0)
find_package( Boost 1.51 REQUIRED COMPONENTS filesystem regex system date_time program_options )

# +-------------------+
# | EXTERNAL PROJECTS |
# +-------------------+
add_subdirectory( ext/chemkinpp )

# +---------------------+
# | SOURCES AND TARGETS |
# +---------------------+

# Add all charm++ interface files
file( GLOB inter src/*.ci)
set(files_inter)
foreach(file ${inter})
  get_filename_component(file_base ${file} NAME_WE)
  get_filename_component(file_path ${file} PATH)
  #message("Interface file ${file_base}")
  set(file_decl "${file_path}/${file_base}.decl.h")
  set(file_def "${file_path}/${file_base}.def.h")
  get_filename_component(file_name_decl ${file_decl} NAME)
  get_filename_component(file_name_def ${file_def} NAME)
  add_custom_command (
    OUTPUT ${file_decl}
    COMMAND ${CMAKE_CXX_COMPILER} ${file}
    COMMAND mv ${file_name_decl} ${file_path}
    COMMAND mv ${file_name_def} ${file_path}
    DEPENDS ${file}
  )
  #message("Dependence file ${file_decl}")
  list(APPEND files_inter ${file_decl})
endforeach()

file( GLOB src src/*.cpp src/iplmc/*.cpp )
add_library( diagnosticlib
    src/diagnostic/activity_log.cpp
    src/diagnostic/activity_log.hpp
	)

add_executable( cfd
		${src}
		ext/chemkinpp/test/assert_handler.cpp 
		${files_inter} )

# +-------------------------------+
# | LINK AND COMPILATION SETTINGS |
# +-------------------------------+
set_property(SOURCE ${src} APPEND_STRING PROPERTY COMPILE_FLAGS "-DCHEMKINPP_IMPLICIT_BLAS=off")

include_directories( 
  ${Boost_INCLUDE_DIRS}
  ext/tvmet/include
  ext/chemkinpp
  ext/chemkinpp/ext/mytools/include )

target_link_libraries( cfd
			   diagnosticlib
		       chemkinpp
		       ${Boost_LIBRARIES} )

set(CMAKE_EXE_LINKER_FLAGS "-balancer CommonLBs -L/opt/apps/intel/13/composer_xe_2013.2.146/mkl/lib/intel64 -lmkl_intel_lp64 -lmkl_sequential -lmkl_core")
#set(CMAKE_EXE_LINKER_FLAGS "-tracemode projections -balancer CommonLBs -L/opt/apps/intel/13/composer_xe_2013.2.146/mkl/lib/intel64 -lmkl_intel_lp64 -lmkl_sequential -lmkl_core")
#set(CMAKE_EXE_LINKER_FLAGS "-tracemode summary")

# +------+
# | MISC |
# +------+
 # use Intel configuration and default CommaInitializer.h
configure_file( ${PROJECT_SOURCE_DIR}/ext/tvmet/include/tvmet/local/config_intel.h 
  ${PROJECT_SOURCE_DIR}/ext/tvmet/include/tvmet/config.h COPY_ONLY )
configure_file( ${PROJECT_SOURCE_DIR}/ext/tvmet/include/tvmet/local/CommaInitializer.h 
  ${PROJECT_SOURCE_DIR}/ext/tvmet/include/tvmet/CommaInitializer.h COPY_ONLY )

# +------------------+
# | COPY INPUT FILES |
# +------------------+
configure_file( test/taylor_green/simparam.in . COPY_ONLY )
configure_file( test/taylor_green/therm.dat   . COPY_ONLY )
configure_file( test/taylor_green/tran.dat    . COPY_ONLY )
