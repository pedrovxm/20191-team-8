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
include examples/CMakeFiles/ex_stream_file.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/ex_stream_file.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/ex_stream_file.dir/flags.make

examples/CMakeFiles/ex_stream_file.dir/ex_stream_file.c.o: examples/CMakeFiles/ex_stream_file.dir/flags.make
examples/CMakeFiles/ex_stream_file.dir/ex_stream_file.c.o: examples/ex_stream_file.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/ex_stream_file.dir/ex_stream_file.c.o"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ex_stream_file.dir/ex_stream_file.c.o   -c /home/adalbs/Documentos/allegro5/examples/ex_stream_file.c

examples/CMakeFiles/ex_stream_file.dir/ex_stream_file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex_stream_file.dir/ex_stream_file.c.i"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adalbs/Documentos/allegro5/examples/ex_stream_file.c > CMakeFiles/ex_stream_file.dir/ex_stream_file.c.i

examples/CMakeFiles/ex_stream_file.dir/ex_stream_file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex_stream_file.dir/ex_stream_file.c.s"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adalbs/Documentos/allegro5/examples/ex_stream_file.c -o CMakeFiles/ex_stream_file.dir/ex_stream_file.c.s

# Object files for target ex_stream_file
ex_stream_file_OBJECTS = \
"CMakeFiles/ex_stream_file.dir/ex_stream_file.c.o"

# External object files for target ex_stream_file
ex_stream_file_EXTERNAL_OBJECTS =

examples/ex_stream_file: examples/CMakeFiles/ex_stream_file.dir/ex_stream_file.c.o
examples/ex_stream_file: examples/CMakeFiles/ex_stream_file.dir/build.make
examples/ex_stream_file: lib/liballegro_main.so.5.2.6
examples/ex_stream_file: lib/liballegro_acodec.so.5.2.6
examples/ex_stream_file: lib/liballegro_dialog.so.5.2.6
examples/ex_stream_file: lib/liballegro_audio.so.5.2.6
examples/ex_stream_file: /usr/lib/libopenal.so
examples/ex_stream_file: /usr/lib/libFLAC.so
examples/ex_stream_file: /usr/lib/libogg.so
examples/ex_stream_file: /usr/lib/libdumb.so
examples/ex_stream_file: /usr/lib/libvorbisfile.so
examples/ex_stream_file: /usr/lib/libvorbis.so
examples/ex_stream_file: /usr/lib/libopusfile.so
examples/ex_stream_file: /usr/lib/libopus.so
examples/ex_stream_file: /usr/lib/libogg.so
examples/ex_stream_file: /usr/lib/libdumb.so
examples/ex_stream_file: /usr/lib/libvorbisfile.so
examples/ex_stream_file: /usr/lib/libvorbis.so
examples/ex_stream_file: /usr/lib/libopusfile.so
examples/ex_stream_file: /usr/lib/libopus.so
examples/ex_stream_file: lib/liballegro.so.5.2.6
examples/ex_stream_file: /usr/lib/libSM.so
examples/ex_stream_file: /usr/lib/libICE.so
examples/ex_stream_file: /usr/lib/libX11.so
examples/ex_stream_file: /usr/lib/libXext.so
examples/ex_stream_file: /usr/lib/libXcursor.so
examples/ex_stream_file: /usr/lib/libXpm.so
examples/ex_stream_file: /usr/lib/libXinerama.so
examples/ex_stream_file: /usr/lib/libXrandr.so
examples/ex_stream_file: /usr/lib/libOpenGL.so
examples/ex_stream_file: /usr/lib/libGLU.so
examples/ex_stream_file: /usr/lib/libGLX.so
examples/ex_stream_file: examples/CMakeFiles/ex_stream_file.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex_stream_file"
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_stream_file.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/ex_stream_file.dir/build: examples/ex_stream_file

.PHONY : examples/CMakeFiles/ex_stream_file.dir/build

examples/CMakeFiles/ex_stream_file.dir/clean:
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -P CMakeFiles/ex_stream_file.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/ex_stream_file.dir/clean

examples/CMakeFiles/ex_stream_file.dir/depend:
	cd /home/adalbs/Documentos/allegro5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5/examples/CMakeFiles/ex_stream_file.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/ex_stream_file.dir/depend

