# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/adalbs/Documentos/allegro5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adalbs/Documentos/allegro5

# Utility rule file for run_tests_shaders.

# Include the progress variables for this target.
include tests/CMakeFiles/run_tests_shaders.dir/progress.make

tests/CMakeFiles/run_tests_shaders: tests/test_driver
	cd /home/adalbs/Documentos/allegro5/tests && ./test_driver --use-shaders /home/adalbs/Documentos/allegro5/tests/test_bitmaps.ini /home/adalbs/Documentos/allegro5/tests/test_bitmaps2.ini /home/adalbs/Documentos/allegro5/tests/test_blend.ini /home/adalbs/Documentos/allegro5/tests/test_locking.ini /home/adalbs/Documentos/allegro5/tests/test_locking2.ini /home/adalbs/Documentos/allegro5/tests/test_backbuffer.ini /home/adalbs/Documentos/allegro5/tests/test_image.ini /home/adalbs/Documentos/allegro5/tests/test_fonts.ini /home/adalbs/Documentos/allegro5/tests/test_prim.ini /home/adalbs/Documentos/allegro5/tests/test_prim2.ini /home/adalbs/Documentos/allegro5/tests/test_convert.ini /home/adalbs/Documentos/allegro5/tests/test_ciede2000.ini

run_tests_shaders: tests/CMakeFiles/run_tests_shaders
run_tests_shaders: tests/CMakeFiles/run_tests_shaders.dir/build.make

.PHONY : run_tests_shaders

# Rule to build all files generated by this target.
tests/CMakeFiles/run_tests_shaders.dir/build: run_tests_shaders

.PHONY : tests/CMakeFiles/run_tests_shaders.dir/build

tests/CMakeFiles/run_tests_shaders.dir/clean:
	cd /home/adalbs/Documentos/allegro5/tests && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_shaders.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/run_tests_shaders.dir/clean

tests/CMakeFiles/run_tests_shaders.dir/depend:
	cd /home/adalbs/Documentos/allegro5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/tests /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/tests /home/adalbs/Documentos/allegro5/tests/CMakeFiles/run_tests_shaders.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/run_tests_shaders.dir/depend

