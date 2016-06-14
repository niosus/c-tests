cmake_minimum_required(VERSION 2.8.8)
project(test_catch)
include(ExternalProject)
find_package(Git REQUIRED)

add_subdirectory("external")

add_executable(main main.cpp)


# define the sources of the tests
set(TEST_SOURCES
    tests/test_lib.cpp
    tests/test_main.cpp
)

# configure the executable
add_executable(SelfTest ${SOURCES})

# configure unit tests via CTest
enable_testing()
add_test(NAME RunTests COMMAND SelfTest)

add_test(NAME ListTests COMMAND SelfTest --list-tests)
set_tests_properties(ListTests PROPERTIES PASS_REGULAR_EXPRESSION "[0-9]+ test cases")

add_test(NAME ListTags COMMAND SelfTest --list-tags)
set_tests_properties(ListTags PROPERTIES PASS_REGULAR_EXPRESSION "[0-9]+ tags")