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
CMAKE_SOURCE_DIR = /home/zhang/clang/myCPP/lab07/exercise01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhang/clang/myCPP/lab07/exercise01/build

# Include any dependencies generated for this target.
include CMakeFiles/calculatevabs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/calculatevabs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calculatevabs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculatevabs.dir/flags.make

CMakeFiles/calculatevabs.dir/exercise01.cpp.o: CMakeFiles/calculatevabs.dir/flags.make
CMakeFiles/calculatevabs.dir/exercise01.cpp.o: ../exercise01.cpp
CMakeFiles/calculatevabs.dir/exercise01.cpp.o: CMakeFiles/calculatevabs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhang/clang/myCPP/lab07/exercise01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculatevabs.dir/exercise01.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/calculatevabs.dir/exercise01.cpp.o -MF CMakeFiles/calculatevabs.dir/exercise01.cpp.o.d -o CMakeFiles/calculatevabs.dir/exercise01.cpp.o -c /home/zhang/clang/myCPP/lab07/exercise01/exercise01.cpp

CMakeFiles/calculatevabs.dir/exercise01.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculatevabs.dir/exercise01.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhang/clang/myCPP/lab07/exercise01/exercise01.cpp > CMakeFiles/calculatevabs.dir/exercise01.cpp.i

CMakeFiles/calculatevabs.dir/exercise01.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculatevabs.dir/exercise01.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhang/clang/myCPP/lab07/exercise01/exercise01.cpp -o CMakeFiles/calculatevabs.dir/exercise01.cpp.s

# Object files for target calculatevabs
calculatevabs_OBJECTS = \
"CMakeFiles/calculatevabs.dir/exercise01.cpp.o"

# External object files for target calculatevabs
calculatevabs_EXTERNAL_OBJECTS =

calculatevabs: CMakeFiles/calculatevabs.dir/exercise01.cpp.o
calculatevabs: CMakeFiles/calculatevabs.dir/build.make
calculatevabs: lib/libvabs.so
calculatevabs: CMakeFiles/calculatevabs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhang/clang/myCPP/lab07/exercise01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable calculatevabs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/calculatevabs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculatevabs.dir/build: calculatevabs
.PHONY : CMakeFiles/calculatevabs.dir/build

CMakeFiles/calculatevabs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calculatevabs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calculatevabs.dir/clean

CMakeFiles/calculatevabs.dir/depend:
	cd /home/zhang/clang/myCPP/lab07/exercise01/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhang/clang/myCPP/lab07/exercise01 /home/zhang/clang/myCPP/lab07/exercise01 /home/zhang/clang/myCPP/lab07/exercise01/build /home/zhang/clang/myCPP/lab07/exercise01/build /home/zhang/clang/myCPP/lab07/exercise01/build/CMakeFiles/calculatevabs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculatevabs.dir/depend

