# iplmcfd_charm
Charm++ implementation of IPLMCFD, a scalable computational fluid dynamics code.

COMPILING
Follow these steps to compile:
1) Create a build directory and start configuration:
mkdir build
cd build
ccmake ..
2) Set both the C and the C++ compiler to your charmc compiler. For example:
/home1/01008/tg802555/charm/mpi-linux-x86_64/bin/charmc
Make sure you add flag "-seq" to both compiler settings to make Charm++
compiler pass the sequential test.
Then, remove flag "-seq" before generating the makefiles.
3) Compile the code:
make -j8

RUNNING
The first parameter is the number of chares in the execution.
