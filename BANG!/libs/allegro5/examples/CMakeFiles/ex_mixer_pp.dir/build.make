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
include examples/CMakeFiles/ex_mixer_pp.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/ex_mixer_pp.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/ex_mixer_pp.dir/flags.make

examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o: examples/CMakeFiles/ex_mixer_pp.dir/flags.make
examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o: examples/ex_mixer_pp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o   -c /home/adalbs/Documentos/allegro5/examples/ex_mixer_pp.c

examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.i"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adalbs/Documentos/allegro5/examples/ex_mixer_pp.c > CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.i

examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.s"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adalbs/Documentos/allegro5/examples/ex_mixer_pp.c -o CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.s

# Object files for target ex_mixer_pp
ex_mixer_pp_OBJECTS = \
"CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o"

# External object files for target ex_mixer_pp
ex_mixer_pp_EXTERNAL_OBJECTS =

examples/ex_mixer_pp: examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o
examples/ex_mixer_pp: examples/CMakeFiles/ex_mixer_pp.dir/build.make
examples/ex_mixer_pp: lib/liballegro_main.so.5.2.6
examples/ex_mixer_pp: lib/liballegro_acodec.so.5.2.6
examples/ex_mixer_pp: lib/liballegro_primitives.so.5.2.6
examples/ex_mixer_pp: lib/liballegro_image.so.5.2.6
examples/ex_mixer_pp: lib/liballegro_dialog.so.5.2.6
examples/ex_mixer_pp: lib/liballegro_audio.so.5.2.6
examples/ex_mixer_pp: /usr/lib/libopenal.so
examples/ex_mixer_pp: /usr/lib/libFLAC.so
examples/ex_mixer_pp: /usr/lib/libogg.so
examples/ex_mixer_pp: /usr/lib/libdumb.so
examples/ex_mixer_pp: /usr/lib/libvorbisfile.so
examples/ex_mixer_pp: /usr/lib/libvorbis.so
examples/ex_mixer_pp: /usr/lib/libopusfile.so
examples/ex_mixer_pp: /usr/lib/libopus.so
examples/ex_mixer_pp: /usr/lib/libogg.so
examples/ex_mixer_pp: /usr/lib/libdumb.so
examples/ex_mixer_pp: /usr/lib/libvorbisfile.so
examples/ex_mixer_pp: /usr/lib/libvorbis.so
examples/ex_mixer_pp: /usr/lib/libopusfile.so
examples/ex_mixer_pp: /usr/lib/libopus.so
examples/ex_mixer_pp: /usr/lib/libfreeimage.so
examples/ex_mixer_pp: /usr/lib/libpng.so
examples/ex_mixer_pp: /usr/lib/libz.so
examples/ex_mixer_pp: /usr/lib/libjpeg.so
examples/ex_mixer_pp: /usr/lib/libwebp.so
examples/ex_mixer_pp: lib/liballegro.so.5.2.6
examples/ex_mixer_pp: /usr/lib/libSM.so
examples/ex_mixer_pp: /usr/lib/libICE.so
examples/ex_mixer_pp: /usr/lib/libX11.so
examples/ex_mixer_pp: /usr/lib/libXext.so
examples/ex_mixer_pp: /usr/lib/libXcursor.so
examples/ex_mixer_pp: /usr/lib/libXpm.so
examples/ex_mixer_pp: /usr/lib/libXinerama.so
examples/ex_mixer_pp: /usr/lib/libXrandr.so
examples/ex_mixer_pp: /usr/lib/libOpenGL.so
examples/ex_mixer_pp: /usr/lib/libGLU.so
examples/ex_mixer_pp: /usr/lib/libGLX.so
examples/ex_mixer_pp: examples/CMakeFiles/ex_mixer_pp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex_mixer_pp"
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_mixer_pp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/ex_mixer_pp.dir/build: examples/ex_mixer_pp

.PHONY : examples/CMakeFiles/ex_mixer_pp.dir/build

examples/CMakeFiles/ex_mixer_pp.dir/clean:
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -P CMakeFiles/ex_mixer_pp.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/ex_mixer_pp.dir/clean

examples/CMakeFiles/ex_mixer_pp.dir/depend:
	cd /home/adalbs/Documentos/allegro5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5/examples/CMakeFiles/ex_mixer_pp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/ex_mixer_pp.dir/depend

