cmake_minimum_required(VERSION 3.10)
project(perf_usage)
add_definitions(-std=c++11)
add_definitions(-Wall)
add_definitions(-O0)
# add_definitions(-g)
include_directories(
  src
)

add_subdirectory(src/perf_usage)
