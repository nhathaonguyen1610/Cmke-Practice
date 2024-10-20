cmake_minimum_required(VERSION 3.22.1)
project(addNum)
include_directories(inc)
add_library(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/src/add.c)
