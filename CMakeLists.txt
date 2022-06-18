cmake_minimum_required(VERSION 3.4)
project(pybind_power)
add_subdirectory(pybind11)
pybind11_add_module(tests pybind_test.cpp)
