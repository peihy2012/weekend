# cmake_minimum_required(VERSION 3.10)
# project(perf_usage)
add_definitions(-std=c++11)

# include_directories(
#   src
# )

add_executable(perf_usage
  perf_usage.cc
)

target_link_libraries(perf_usage
  rt
)

set_target_properties(perf_usage
  PROPERTIES
  ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
  LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)
