#cmake_tutorials

cmake_minimum_required(VERSION 3.16.3)

project(cmake_tutorials)

set(CMAKE_C_COMPILER "g++")
set(CMAKE_CXX_COMPILER "g++")

include_directories(inc)

#set(SOURCES "src/main.cpp" "src/relay.cpp" "src/led.c")

file(GLOB SOURCES "src/*.cpp" "src/*.c")

add_executable(cmake_tutorials ${SOURCES})
