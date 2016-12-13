cmake_minimum_required(VERSION 3.6)
project(clrs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_INCLUDE_PATH include)

set(SOURCE_FILES main.cpp src/sort/insertion_sort.cpp include/clrs.h include/sort.h include/util.h src/exercises/2.1-4.cpp include/bitops.h src/sort/merge_sort.cpp)
add_executable(clrs ${SOURCE_FILES})
add_executable(insertion-sort src/sort/insertion_sort.cpp)
add_executable(merge-sort src/sort/merge_sort.cpp)
add_executable(2.1-4 src/exercises/2.1-4.cpp)