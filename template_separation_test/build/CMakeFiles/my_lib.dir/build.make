# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/igor/Code/c++_tests/template_separation_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/igor/Code/c++_tests/template_separation_test/build

# Include any dependencies generated for this target.
include CMakeFiles/my_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_lib.dir/flags.make

CMakeFiles/my_lib.dir/lib.cpp.o: CMakeFiles/my_lib.dir/flags.make
CMakeFiles/my_lib.dir/lib.cpp.o: ../lib.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/igor/Code/c++_tests/template_separation_test/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/my_lib.dir/lib.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/my_lib.dir/lib.cpp.o -c /home/igor/Code/c++_tests/template_separation_test/lib.cpp

CMakeFiles/my_lib.dir/lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_lib.dir/lib.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/igor/Code/c++_tests/template_separation_test/lib.cpp > CMakeFiles/my_lib.dir/lib.cpp.i

CMakeFiles/my_lib.dir/lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_lib.dir/lib.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/igor/Code/c++_tests/template_separation_test/lib.cpp -o CMakeFiles/my_lib.dir/lib.cpp.s

CMakeFiles/my_lib.dir/lib.cpp.o.requires:
.PHONY : CMakeFiles/my_lib.dir/lib.cpp.o.requires

CMakeFiles/my_lib.dir/lib.cpp.o.provides: CMakeFiles/my_lib.dir/lib.cpp.o.requires
	$(MAKE) -f CMakeFiles/my_lib.dir/build.make CMakeFiles/my_lib.dir/lib.cpp.o.provides.build
.PHONY : CMakeFiles/my_lib.dir/lib.cpp.o.provides

CMakeFiles/my_lib.dir/lib.cpp.o.provides.build: CMakeFiles/my_lib.dir/lib.cpp.o

# Object files for target my_lib
my_lib_OBJECTS = \
"CMakeFiles/my_lib.dir/lib.cpp.o"

# External object files for target my_lib
my_lib_EXTERNAL_OBJECTS =

libmy_lib.a: CMakeFiles/my_lib.dir/lib.cpp.o
libmy_lib.a: CMakeFiles/my_lib.dir/build.make
libmy_lib.a: CMakeFiles/my_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libmy_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/my_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_lib.dir/build: libmy_lib.a
.PHONY : CMakeFiles/my_lib.dir/build

CMakeFiles/my_lib.dir/requires: CMakeFiles/my_lib.dir/lib.cpp.o.requires
.PHONY : CMakeFiles/my_lib.dir/requires

CMakeFiles/my_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_lib.dir/clean

CMakeFiles/my_lib.dir/depend:
	cd /home/igor/Code/c++_tests/template_separation_test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/igor/Code/c++_tests/template_separation_test /home/igor/Code/c++_tests/template_separation_test /home/igor/Code/c++_tests/template_separation_test/build /home/igor/Code/c++_tests/template_separation_test/build /home/igor/Code/c++_tests/template_separation_test/build/CMakeFiles/my_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_lib.dir/depend

