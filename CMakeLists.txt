cmake_minimum_required(VERSION 3.23)
project(quadratic_formula_calc_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(qf-calc
        src/header.h
        src/main.cpp)

install(TARGETS qf-calc DESTINATION bin)
