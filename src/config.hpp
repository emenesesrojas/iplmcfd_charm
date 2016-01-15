#ifndef __CONFIG_HPP__
#define __CONFIG_HPP__

#include <chemkinpp/thermomixture.hpp>
#include <chemkinpp/cpreactor.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/random/linear_congruential.hpp>
#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/progress.hpp>
#include <boost/foreach.hpp>
#include <mytools/parameters.hpp>
#include <fstream>
#include "domain.hpp"
#include "simparam.hpp"

using namespace iplmcfd;

/**
 class ConfigMessage
 Packs the command line configuration parameters.
*/
class ConfigMessage: public CMessage_ConfigMessage {
public:
	int argc;
	char **argv;
	
	// Default Constructor
	ConfigMessage(int _argc, char** _argv): argc(_argc), argv(_argv){}
	ConfigMessage(int _argc, char* ptr){
		int length;
		char *str;
		argc = _argc;
		argv = new char*[argc];
		
		for(int i=0; i<argc; i++){
			memcpy(&length, ptr, sizeof(int));
			ptr = ptr + sizeof(int);
			str = new char[length];
			strcpy(str, ptr);
			ptr = ptr + length;
			argv[i] = str;
		}
	}

	// Print method
	void print(){
		CkPrintf("*** ConfigMessage ***");
		for(int i=0; i<argc; i++){
			CkPrintf("[%d]=%s\n",i,argv[i]);
		}
		CkPrintf("*********************");
	}

	// Pack method
	static void *pack(ConfigMessage *msg){
		int totalsize = sizeof(int);
		char *ptr;
		int length;

		for(int i=0; i<msg->argc; i++){
			totalsize += sizeof(int) + strlen(msg->argv[i]) + 1;
		}
		char *buf = (char *)CkAllocBuffer(msg, totalsize);
		memcpy(buf, &(msg->argc), sizeof(int));
		ptr = buf + sizeof(int);
		for(int i=0; i<msg->argc; i++){
			length = strlen(msg->argv[i]) + 1;
			memcpy(ptr, &length, sizeof(int));
			ptr = ptr + sizeof(int);
			strcpy(ptr, msg->argv[i]);
			ptr = ptr + length;
		}
		delete msg;
		return (void *) buf;
	}

	// Unpack method
	static ConfigMessage *unpack(void *buf){
		char *ptr = (char *)buf;
		int argc;

		memcpy(&argc, ptr, sizeof(int));
		ptr = ptr + sizeof(int);
		ConfigMessage *msg = (ConfigMessage *) CkAllocBuffer(buf, sizeof(ConfigMessage));
		msg = new ((void *) msg) ConfigMessage(argc, ptr);
		CkFreeMsg(buf);
		return msg;
	}
};

/**
 class Config
 Initializes configuration variables and files.
*/
class Config: public CBase_Config {
private:
	Domain *domain;
public:
	// Default constructor
	Config();
	// Initializes simulation parameters and creates directories
	void start(ConfigMessage *m);
	// Returns a reference to the domain
	Domain &get_domain();
	// Returns a referece to simparam
	const simparam &get_simparam();
	// Destructor
	~Config();
private:
	boost::filesystem::path create_pe_dir();	
};

#endif
