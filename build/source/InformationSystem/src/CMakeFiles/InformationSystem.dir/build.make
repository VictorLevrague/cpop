# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/levrague/Documents/apps/cpop-2.0/cpop-2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build

# Include any dependencies generated for this target.
include source/InformationSystem/src/CMakeFiles/InformationSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include source/InformationSystem/src/CMakeFiles/InformationSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include source/InformationSystem/src/CMakeFiles/InformationSystem.dir/progress.make

# Include the compile flags for this target's objects.
include source/InformationSystem/src/CMakeFiles/InformationSystem.dir/flags.make

source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o: source/InformationSystem/src/CMakeFiles/InformationSystem.dir/flags.make
source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o: ../source/InformationSystem/src/InformationSystemManager.cc
source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o: source/InformationSystem/src/CMakeFiles/InformationSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o -MF CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o.d -o CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o -c /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/source/InformationSystem/src/InformationSystemManager.cc

source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.i"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/source/InformationSystem/src/InformationSystemManager.cc > CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.i

source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.s"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/source/InformationSystem/src/InformationSystemManager.cc -o CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.s

# Object files for target InformationSystem
InformationSystem_OBJECTS = \
"CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o"

# External object files for target InformationSystem
InformationSystem_EXTERNAL_OBJECTS =

source/InformationSystem/src/libInformationSystem.a: source/InformationSystem/src/CMakeFiles/InformationSystem.dir/InformationSystemManager.cc.o
source/InformationSystem/src/libInformationSystem.a: source/InformationSystem/src/CMakeFiles/InformationSystem.dir/build.make
source/InformationSystem/src/libInformationSystem.a: source/InformationSystem/src/CMakeFiles/InformationSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libInformationSystem.a"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src && $(CMAKE_COMMAND) -P CMakeFiles/InformationSystem.dir/cmake_clean_target.cmake
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/InformationSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/InformationSystem/src/CMakeFiles/InformationSystem.dir/build: source/InformationSystem/src/libInformationSystem.a
.PHONY : source/InformationSystem/src/CMakeFiles/InformationSystem.dir/build

source/InformationSystem/src/CMakeFiles/InformationSystem.dir/clean:
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src && $(CMAKE_COMMAND) -P CMakeFiles/InformationSystem.dir/cmake_clean.cmake
.PHONY : source/InformationSystem/src/CMakeFiles/InformationSystem.dir/clean

source/InformationSystem/src/CMakeFiles/InformationSystem.dir/depend:
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/levrague/Documents/apps/cpop-2.0/cpop-2.0 /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/source/InformationSystem/src /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/source/InformationSystem/src/CMakeFiles/InformationSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/InformationSystem/src/CMakeFiles/InformationSystem.dir/depend

