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

# Include any dependencies generated for this target.
include examples/CMakeFiles/ex_draw.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/ex_draw.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/ex_draw.dir/flags.make

examples/CMakeFiles/ex_draw.dir/ex_draw.c.o: examples/CMakeFiles/ex_draw.dir/flags.make
examples/CMakeFiles/ex_draw.dir/ex_draw.c.o: examples/ex_draw.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/ex_draw.dir/ex_draw.c.o"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ex_draw.dir/ex_draw.c.o   -c /home/adalbs/Documentos/allegro5/examples/ex_draw.c

examples/CMakeFiles/ex_draw.dir/ex_draw.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex_draw.dir/ex_draw.c.i"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adalbs/Documentos/allegro5/examples/ex_draw.c > CMakeFiles/ex_draw.dir/ex_draw.c.i

examples/CMakeFiles/ex_draw.dir/ex_draw.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex_draw.dir/ex_draw.c.s"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adalbs/Documentos/allegro5/examples/ex_draw.c -o CMakeFiles/ex_draw.dir/ex_draw.c.s

# Object files for target ex_draw
ex_draw_OBJECTS = \
"CMakeFiles/ex_draw.dir/ex_draw.c.o"

# External object files for target ex_draw
ex_draw_EXTERNAL_OBJECTS =

examples/ex_draw: examples/CMakeFiles/ex_draw.dir/ex_draw.c.o
examples/ex_draw: examples/CMakeFiles/ex_draw.dir/build.make
examples/ex_draw: lib/liballegro_main.so.5.2.6
examples/ex_draw: lib/liballegro_font.so.5.2.6
examples/ex_draw: lib/liballegro_image.so.5.2.6
examples/ex_draw: lib/liballegro_color.so.5.2.6
examples/ex_draw: lib/liballegro_primitives.so.5.2.6
examples/ex_draw: lib/liballegro_dialog.so.5.2.6
examples/ex_draw: /usr/lib/libfreeimage.so
examples/ex_draw: /usr/lib/libpng.so
examples/ex_draw: /usr/lib/libz.so
examples/ex_draw: /usr/lib/libjpeg.so
examples/ex_draw: /usr/lib/libwebp.so
examples/ex_draw: lib/liballegro.so.5.2.6
examples/ex_draw: /usr/lib/libSM.so
examples/ex_draw: /usr/lib/libICE.so
examples/ex_draw: /usr/lib/libX11.so
examples/ex_draw: /usr/lib/libXext.so
examples/ex_draw: /usr/lib/libXcursor.so
examples/ex_draw: /usr/lib/libXpm.so
examples/ex_draw: /usr/lib/libXinerama.so
examples/ex_draw: /usr/lib/libXrandr.so
examples/ex_draw: /usr/lib/libOpenGL.so
examples/ex_draw: /usr/lib/libGLU.so
examples/ex_draw: /usr/lib/libGLX.so
examples/ex_draw: examples/CMakeFiles/ex_draw.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex_draw"
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_draw.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/ex_draw.dir/build: examples/ex_draw

.PHONY : examples/CMakeFiles/ex_draw.dir/build

examples/CMakeFiles/ex_draw.dir/clean:
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -P CMakeFiles/ex_draw.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/ex_draw.dir/clean

examples/CMakeFiles/ex_draw.dir/depend:
	cd /home/adalbs/Documentos/allegro5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5/examples/CMakeFiles/ex_draw.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/ex_draw.dir/depend

