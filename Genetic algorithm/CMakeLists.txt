cmake_minimum_required(VERSION 3.5)

project(GeneticAlgorithm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rastrigin main.cpp ga.h xy.h xy.cpp)  
