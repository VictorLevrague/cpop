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
include test/cReaderTest/CMakeFiles/cReaderTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/cReaderTest/CMakeFiles/cReaderTest.dir/compiler_depend.make

# Include the progress variables for this target.
include test/cReaderTest/CMakeFiles/cReaderTest.dir/progress.make

# Include the compile flags for this target's objects.
include test/cReaderTest/CMakeFiles/cReaderTest.dir/flags.make

test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.o: test/cReaderTest/CMakeFiles/cReaderTest.dir/flags.make
test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.o: ../test/cReaderTest/main.cc
test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.o: test/cReaderTest/CMakeFiles/cReaderTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.o"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.o -MF CMakeFiles/cReaderTest.dir/main.cc.o.d -o CMakeFiles/cReaderTest.dir/main.cc.o -c /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/main.cc

test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cReaderTest.dir/main.cc.i"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/main.cc > CMakeFiles/cReaderTest.dir/main.cc.i

test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cReaderTest.dir/main.cc.s"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/main.cc -o CMakeFiles/cReaderTest.dir/main.cc.s

test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.o: test/cReaderTest/CMakeFiles/cReaderTest.dir/flags.make
test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.o: ../test/cReaderTest/customobject.cc
test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.o: test/cReaderTest/CMakeFiles/cReaderTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.o"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.o -MF CMakeFiles/cReaderTest.dir/customobject.cc.o.d -o CMakeFiles/cReaderTest.dir/customobject.cc.o -c /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/customobject.cc

test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cReaderTest.dir/customobject.cc.i"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/customobject.cc > CMakeFiles/cReaderTest.dir/customobject.cc.i

test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cReaderTest.dir/customobject.cc.s"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/customobject.cc -o CMakeFiles/cReaderTest.dir/customobject.cc.s

test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.o: test/cReaderTest/CMakeFiles/cReaderTest.dir/flags.make
test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.o: ../test/cReaderTest/test.cc
test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.o: test/cReaderTest/CMakeFiles/cReaderTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.o"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.o -MF CMakeFiles/cReaderTest.dir/test.cc.o.d -o CMakeFiles/cReaderTest.dir/test.cc.o -c /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/test.cc

test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cReaderTest.dir/test.cc.i"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/test.cc > CMakeFiles/cReaderTest.dir/test.cc.i

test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cReaderTest.dir/test.cc.s"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/test.cc -o CMakeFiles/cReaderTest.dir/test.cc.s

# Object files for target cReaderTest
cReaderTest_OBJECTS = \
"CMakeFiles/cReaderTest.dir/main.cc.o" \
"CMakeFiles/cReaderTest.dir/customobject.cc.o" \
"CMakeFiles/cReaderTest.dir/test.cc.o"

# External object files for target cReaderTest
cReaderTest_EXTERNAL_OBJECTS =

test/cReaderTest/cReaderTest: test/cReaderTest/CMakeFiles/cReaderTest.dir/main.cc.o
test/cReaderTest/cReaderTest: test/cReaderTest/CMakeFiles/cReaderTest.dir/customobject.cc.o
test/cReaderTest/cReaderTest: test/cReaderTest/CMakeFiles/cReaderTest.dir/test.cc.o
test/cReaderTest/cReaderTest: test/cReaderTest/CMakeFiles/cReaderTest.dir/build.make
test/cReaderTest/cReaderTest: source/cReader/src/libcReader.a
test/cReaderTest/cReaderTest: test/cReaderTest/CMakeFiles/cReaderTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cReaderTest"
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cReaderTest.dir/link.txt --verbose=$(VERBOSE)
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && /usr/bin/cmake -E copy_if_different /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest/testcheck.cfg /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest

# Rule to build all files generated by this target.
test/cReaderTest/CMakeFiles/cReaderTest.dir/build: test/cReaderTest/cReaderTest
.PHONY : test/cReaderTest/CMakeFiles/cReaderTest.dir/build

test/cReaderTest/CMakeFiles/cReaderTest.dir/clean:
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest && $(CMAKE_COMMAND) -P CMakeFiles/cReaderTest.dir/cmake_clean.cmake
.PHONY : test/cReaderTest/CMakeFiles/cReaderTest.dir/clean

test/cReaderTest/CMakeFiles/cReaderTest.dir/depend:
	cd /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/levrague/Documents/apps/cpop-2.0/cpop-2.0 /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/test/cReaderTest /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest /home/levrague/Documents/apps/cpop-2.0/cpop-2.0/build/test/cReaderTest/CMakeFiles/cReaderTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/cReaderTest/CMakeFiles/cReaderTest.dir/depend

