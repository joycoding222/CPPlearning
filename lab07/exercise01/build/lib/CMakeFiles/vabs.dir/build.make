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
include lib/CMakeFiles/vabs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/vabs.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/vabs.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/vabs.dir/flags.make

lib/CMakeFiles/vabs.dir/vabs.cpp.o: lib/CMakeFiles/vabs.dir/flags.make
lib/CMakeFiles/vabs.dir/vabs.cpp.o: ../lib/vabs.cpp
lib/CMakeFiles/vabs.dir/vabs.cpp.o: lib/CMakeFiles/vabs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhang/clang/myCPP/lab07/exercise01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/vabs.dir/vabs.cpp.o"
	cd /home/zhang/clang/myCPP/lab07/exercise01/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/vabs.dir/vabs.cpp.o -MF CMakeFiles/vabs.dir/vabs.cpp.o.d -o CMakeFiles/vabs.dir/vabs.cpp.o -c /home/zhang/clang/myCPP/lab07/exercise01/lib/vabs.cpp

lib/CMakeFiles/vabs.dir/vabs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vabs.dir/vabs.cpp.i"
	cd /home/zhang/clang/myCPP/lab07/exercise01/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhang/clang/myCPP/lab07/exercise01/lib/vabs.cpp > CMakeFiles/vabs.dir/vabs.cpp.i

lib/CMakeFiles/vabs.dir/vabs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vabs.dir/vabs.cpp.s"
	cd /home/zhang/clang/myCPP/lab07/exercise01/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhang/clang/myCPP/lab07/exercise01/lib/vabs.cpp -o CMakeFiles/vabs.dir/vabs.cpp.s

# Object files for target vabs
vabs_OBJECTS = \
"CMakeFiles/vabs.dir/vabs.cpp.o"

# External object files for target vabs
vabs_EXTERNAL_OBJECTS =

lib/libvabs.so: lib/CMakeFiles/vabs.dir/vabs.cpp.o
lib/libvabs.so: lib/CMakeFiles/vabs.dir/build.make
lib/libvabs.so: lib/CMakeFiles/vabs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhang/clang/myCPP/lab07/exercise01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libvabs.so"
	cd /home/zhang/clang/myCPP/lab07/exercise01/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vabs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/vabs.dir/build: lib/libvabs.so
.PHONY : lib/CMakeFiles/vabs.dir/build

lib/CMakeFiles/vabs.dir/clean:
	cd /home/zhang/clang/myCPP/lab07/exercise01/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/vabs.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/vabs.dir/clean

lib/CMakeFiles/vabs.dir/depend:
	cd /home/zhang/clang/myCPP/lab07/exercise01/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhang/clang/myCPP/lab07/exercise01 /home/zhang/clang/myCPP/lab07/exercise01/lib /home/zhang/clang/myCPP/lab07/exercise01/build /home/zhang/clang/myCPP/lab07/exercise01/build/lib /home/zhang/clang/myCPP/lab07/exercise01/build/lib/CMakeFiles/vabs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/vabs.dir/depend

