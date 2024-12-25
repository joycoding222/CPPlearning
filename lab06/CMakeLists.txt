# CMake minimun version
cmake_minimum_required(VERSION 3.10)

# project information
project(Swap_number)

# search the source files in the directory and store them into the variable DIR_SRCS
aux_source_directory(. DIR_SRCS)

# add the directory of include
include_directories(lib)

# add the subdirectory of lib
add_subdirectory(lib)

# specify the build target
add_executable(Swap_number ${DIR_SRCS})

# add the static library
target_link_libraries(Swap_number swap)