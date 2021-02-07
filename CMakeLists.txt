cmake_minimum_required(VERSION 3.10)
project(ExampleProject)

find_package (Eigen3 3.3 REQUIRED)
set(CMAKE_CXX_STANDARD 11)

include_directories(src)


# include
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)