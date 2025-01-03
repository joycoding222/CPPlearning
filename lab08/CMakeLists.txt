cmake_minimum_required(VERSION 3.12)

add_definitions(-DWITH_AVX2)
add_definitions(-mavx2)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(. SRCS)

project(add)

add_executable(vectoradd ${SRCS})

find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    message("OpenMP found.")
    target_link_libraries(vectoradd PUBLIC OpenMP::OpenMP_CXX)
endif()