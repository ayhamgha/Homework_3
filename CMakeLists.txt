cmake_minimum_required(VERSION 3.16.3)
project(third_project)

set(CMAKE_CXX_STANDARD 17) # -std=c++17
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # importan!

# include(api/html_writer.hpp)
include_directories(api/)
add_library(html_writer html_writer.cpp)

add_executable(main main.cpp)

target_link_libraries(main html_writer)