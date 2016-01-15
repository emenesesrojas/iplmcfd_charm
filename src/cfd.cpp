#include "particle.hpp"
#include "cfd.decl.h"
#include "config.hpp"
#include "block.hpp"

// readonly variables
CProxy_Main mainProxy;
CProxy_Config groupProxy;
int chares_x;
int chares_y;
int chares_z;

// Main class
class Main : public CBase_Main {
public:
	// chare array
	CProxy_Block array;
	//chare group
	CProxy_Config group;
	// progress bar
	boost::progress_display *prog;
	double startTime, lastTime, *iterTime;
	int iteration;

	// main function
	Main(CkArgMsg* m) {

		// printing welcome
		CkPrintf("Taylor-Green Benchmark Charm++ Implementation\n");

		// storing proxy
		mainProxy = thisProxy;

		// setting chare array dimensions
		const simparam& p = simparam::instance(m->argc,m->argv);
		chares_x = p.chares_x;
		chares_y = p.chares_y;
		chares_z = p.chares_z;

		CkPrintf("Chare Array size %d %d %d\n",chares_x,chares_y,chares_z);

		// creating the Charm++ group Config	
		ConfigMessage *msg = new ConfigMessage(m->argc, m->argv);
		group = CProxy_Config::ckNew();
		groupProxy = group;
		CkCallback *cb = new CkCallback(CkIndex_Main::start(), mainProxy);
		group.ckSetReductionClient(cb);
		group.start(msg);
	}

	// simulation start function
	void start(){

		// creating array
		array = CProxy_Block::ckNew(chares_x,chares_y,chares_z);

		// starting execution
		array.start();

		// initial time
		startTime = CmiWallTimer();
		lastTime = startTime;
	}

	// finish function
	void finish(){
		double endTime = CmiWallTimer();
		CkPrintf("Total Execution Time: %.2f seconds\n",endTime-startTime);
		CkExit();
	}

	// reduction of dt
	void reduce_dt(double dt){
		array.update_dt(dt);
	}

	// reduction of ke
	void reduce_ke(double ke){
		array.update_ke(ke);
	}

};

#include "cfd.def.h"
