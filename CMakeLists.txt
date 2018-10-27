cmake_minimum_required(VERSION 3.11)
project(Trees)

set(CMAKE_CXX_STANDARD 17)

# Enable ExternalProject CMake module
include(ExternalProject)


add_executable(BinarySearchTree main.cpp BST.cpp BST.h)
