cmake_minimum_required(VERSION 3.10)

project(calculatevabs)

aux_source_directory(. DIR_SRCS)

# 当前目录下有一个子目录lib
include_directories(lib) 

# 在build后建立一个子目录lib
add_subdirectory(lib)

add_executable(calculatevabs ${DIR_SRCS})

target_link_libraries(calculatevabs vabs)