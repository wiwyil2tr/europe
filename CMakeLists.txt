cmake_minimum_required(VERSION 3.0)

project(europe)

add_executable(europe main.cpp)

install(TARGETS europe RUNTIME DESTINATION bin)
