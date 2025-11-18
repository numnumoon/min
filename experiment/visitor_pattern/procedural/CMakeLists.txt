cmake_minimum_required(VERSION 3.13)
project(visitor CXX)

add_subdirectory(src)

add_executable(procedural.out main.cpp)

target_link_libraries(procedural.out PRIVATE procedural)
