CPOP 2.0 
The Cell Population modeler is combined to Geant4 simulations in order to tackle how energy depositions are allocated to cells, especially when enhancing radiation outcomes using high-Z nanoparticles. 
CPOP is fully interfaced with the Geant4 Monte Carlo toolkit and is able to directly emulate Geant4 simulations after compilation.

CPOP structuration:
cpop-2.0/
	cmake/
	config/
	example/
	source/
	test/
	tool/

LICENCE: information available in LICENCE.md file
INSTALLATION: information available in INSTALL.md file

EXAMPLE OF APPLICATIONS:
1. GeneratePopulation
This example shows how to use a configuration file to generate a population of cells. The population is generated between two spheres and can be compacted or spaced to model real situations.

Build the example: in the GeneratePopulation directory
source path/to/CPOP-install/CPOP/bin/CPOP.sh
source path/to/GEANT4-install/bin/geant4.sh
mkdir build
cd build
cmake ..
make

Use the example: 
The executable has 2 options:

-f filename : path to the configuration file
–vis : generate a .off file to visualize your population with geomview (optional)

./generatePopulation -f data/exampleConfig.cfg --vis 
geomview data/exampleConfig.cfg.off &
In the data directory, you will find exampleConfig.xml which can be used to simulate radiation exposure in Geant4.

2. HomogeneousRadiation
This example shows you how to apply radiation exposure on a cell population using Geant4.

The user can choose :
The PhysicsList : emstandard emstandard_opt1 emstandard_opt2 emstandard_opt3 emstandard_opt4 emlivermore empenelope emDNAphysics.
The particle generated by the PrimaryGenerator.
The energy spectrum.
The number of cell to observe during the simulation (used to reduce computation time).

Build the example: in the HomogeneousRadiation directory
source path/to/CPOP-install/CPOP/bin/CPOP.sh
source path/to/GEANT4-install/bin/geant4.sh
mkdir build
cd build
cmake ..
make 

Use the example:
The executable has 2 options:

-m filename : path to geant4 macro file
-t : number of thread to use (only available if Geant4 has been built with multihread support)
Without Geant4 multithread :
./homogeneousRadiation -m data/run.mac

With Geant4 multithread (using hadd root executable to merge outputs):
./homogeneousRadiation -m data/run.mac -t 4
hadd result.root output_t{0..3}.root

3. NanoparticleRadiation
This example shows you how to simulate the effect of nanoparticle in the cell population using Geant4.

This page only details the nanoparticle part but the example uses both a homogeneous source and a nanoparticle one.

To model nanoparticle, a simulation must be done beforehand to collect the secondary electrons and the energy spectrum. See this guide to do it TODO.

Once the energy spectrum is available, the user can choose :

The PhysicsList : emstandard emstandard_opt1 emstandard_opt2 emstandard_opt3 emstandard_opt4 emlivermore empenelope emDNAphysics.
The number of nanoparticle to distribute.
The distribution of the nanoparticle in the spheroid.
The position inside a cell.
The secondary particle generated by the nanoparticle PrimaryGenerator.
The secondary energy spectrum.

Build the example: in the NanoparticleRadiation directory
source path/to/CPOP-install/CPOP/bin/CPOP.sh
source path/to/GEANT4-install/bin/geant4.sh
mkdir build
cd build
cmake ..
make 

Use the example:
The executable has 2 options:

-m [filename] : path to geant4 macro file
-t : number of thread to use (only available if Geant4 has been built with multihread support)
Without Geant4 multithread :
./complexRadiation -m data/run.mac

With Geant4 multithread (using hadd root executable to merge outputs):
./complexRadiation -m data/run.mac -t 4
hadd result.root output_t{0..3}.root

