cmake_minimum_required(VERSION 3.6)
project(clrs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_INCLUDE_PATH include)

add_executable(insertion-sort src/sort/insertion_sort.cc)
add_executable(merge-sort src/sort/merge_sort.cc)
add_executable(2.1-4 src/exercises/2.1-4.cc)
