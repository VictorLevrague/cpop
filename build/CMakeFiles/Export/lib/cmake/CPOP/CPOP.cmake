# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget InformationSystem cReader Platform_SMA Modeler)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target InformationSystem
add_library(InformationSystem STATIC IMPORTED)

set_target_properties(InformationSystem PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/CPOP"
  INTERFACE_LINK_LIBRARIES "Qt5::Core"
)

# Create imported target cReader
add_library(cReader STATIC IMPORTED)

set_target_properties(cReader PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/CPOP"
)

# Create imported target Platform_SMA
add_library(Platform_SMA STATIC IMPORTED)

set_target_properties(Platform_SMA PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/CPOP"
  INTERFACE_LINK_LIBRARIES "Qt5::Core;CGAL;InformationSystem;CLHEP::CLHEP;/usr/lib64/libGL.so"
)

# Create imported target Modeler
add_library(Modeler STATIC IMPORTED)

set_target_properties(Modeler PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/CPOP"
  INTERFACE_LINK_LIBRARIES "/usr/lib64/libmpfr.so;/usr/lib64/libgmp.so;/home/levrague/Documents/apps/CGAL-4.11.3/cgal-releases-CGAL-4.11.3/build_CGAL-4.11.3/lib/libCGAL.so.13.0.1;CGAL;Qt5::Core;Qt5::Xml;InformationSystem;Platform_SMA;/usr/lib64/libGL.so;/usr/lib64/libxerces-c.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libCore.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libImt.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libRIO.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libNet.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libHist.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libGraf.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libGraf3d.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libGpad.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libROOTDataFrame.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libTree.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libTreePlayer.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libRint.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libPostscript.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libMatrix.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libPhysics.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libMathCore.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libThread.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libMultiProc.so;/home/levrague/Documents/apps/root6/root_v6.24.06.Linux-fedora32-x86_64-gcc10.2/root/lib/libROOTVecOps.so;cReader;G4Tree;G4FR;G4GMocren;G4visHepRep;G4RayTracer;G4VRML;G4vis_management;G4modeling;G4interfaces;G4persistency;G4analysis;G4error_propagation;G4readout;G4physicslists;G4run;G4event;G4tracking;G4parmodels;G4processes;G4digits_hits;G4track;G4particles;G4geometry;G4materials;G4graphics_reps;G4intercoms;G4global;G4zlib;CLHEP::CLHEP"
)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/CPOP-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
