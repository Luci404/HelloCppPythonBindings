cmake_minimum_required(VERSION 3.4)
project(HelloCppPythonBindings)
add_subdirectory(vendor/pybind11)
pybind11_add_module(module_name Module.cpp)