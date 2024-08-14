cmake_minimum_required(VERSION 3.0)

project(openmp)

find_package(OpenMP REQUIRED)
add_executable(openmp main.cpp)
target_link_libraries(openmp PRIVATE OpenMP::OpenMP_CXX)

