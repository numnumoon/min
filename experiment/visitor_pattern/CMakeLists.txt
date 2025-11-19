cmake_minimum_required(VERSION 3.13)
project(visitor CXX)

add_subdirectory(src)

add_executable(procedural_out main.cpp)

target_link_libraries(procedural_out PRIVATE procedural)
