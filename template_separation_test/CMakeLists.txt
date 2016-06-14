cmake_minimum_required(VERSION 2.8.3 FATAL_ERROR)
project(template_separation)

add_library(my_lib lib.cpp)

add_executable(main main.cpp)
target_link_libraries(main my_lib)
