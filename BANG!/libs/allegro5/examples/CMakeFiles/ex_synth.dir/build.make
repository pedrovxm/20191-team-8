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
include examples/CMakeFiles/ex_synth.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/ex_synth.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/ex_synth.dir/flags.make

examples/CMakeFiles/ex_synth.dir/ex_synth.cpp.o: examples/CMakeFiles/ex_synth.dir/flags.make
examples/CMakeFiles/ex_synth.dir/ex_synth.cpp.o: examples/ex_synth.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/ex_synth.dir/ex_synth.cpp.o"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex_synth.dir/ex_synth.cpp.o -c /home/adalbs/Documentos/allegro5/examples/ex_synth.cpp

examples/CMakeFiles/ex_synth.dir/ex_synth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex_synth.dir/ex_synth.cpp.i"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adalbs/Documentos/allegro5/examples/ex_synth.cpp > CMakeFiles/ex_synth.dir/ex_synth.cpp.i

examples/CMakeFiles/ex_synth.dir/ex_synth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex_synth.dir/ex_synth.cpp.s"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adalbs/Documentos/allegro5/examples/ex_synth.cpp -o CMakeFiles/ex_synth.dir/ex_synth.cpp.s

examples/CMakeFiles/ex_synth.dir/nihgui.cpp.o: examples/CMakeFiles/ex_synth.dir/flags.make
examples/CMakeFiles/ex_synth.dir/nihgui.cpp.o: examples/nihgui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/CMakeFiles/ex_synth.dir/nihgui.cpp.o"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex_synth.dir/nihgui.cpp.o -c /home/adalbs/Documentos/allegro5/examples/nihgui.cpp

examples/CMakeFiles/ex_synth.dir/nihgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex_synth.dir/nihgui.cpp.i"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adalbs/Documentos/allegro5/examples/nihgui.cpp > CMakeFiles/ex_synth.dir/nihgui.cpp.i

examples/CMakeFiles/ex_synth.dir/nihgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex_synth.dir/nihgui.cpp.s"
	cd /home/adalbs/Documentos/allegro5/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adalbs/Documentos/allegro5/examples/nihgui.cpp -o CMakeFiles/ex_synth.dir/nihgui.cpp.s

# Object files for target ex_synth
ex_synth_OBJECTS = \
"CMakeFiles/ex_synth.dir/ex_synth.cpp.o" \
"CMakeFiles/ex_synth.dir/nihgui.cpp.o"

# External object files for target ex_synth
ex_synth_EXTERNAL_OBJECTS =

examples/ex_synth: examples/CMakeFiles/ex_synth.dir/ex_synth.cpp.o
examples/ex_synth: examples/CMakeFiles/ex_synth.dir/nihgui.cpp.o
examples/ex_synth: examples/CMakeFiles/ex_synth.dir/build.make
examples/ex_synth: lib/liballegro_main.so.5.2.6
examples/ex_synth: lib/liballegro_primitives.so.5.2.6
examples/ex_synth: lib/liballegro_audio.so.5.2.6
examples/ex_synth: lib/liballegro_ttf.so.5.2.6
examples/ex_synth: lib/liballegro_dialog.so.5.2.6
examples/ex_synth: /usr/lib/libopenal.so
examples/ex_synth: lib/liballegro_font.so.5.2.6
examples/ex_synth: /usr/lib/libfreetype.so
examples/ex_synth: lib/liballegro.so.5.2.6
examples/ex_synth: /usr/lib/libSM.so
examples/ex_synth: /usr/lib/libICE.so
examples/ex_synth: /usr/lib/libX11.so
examples/ex_synth: /usr/lib/libXext.so
examples/ex_synth: /usr/lib/libXcursor.so
examples/ex_synth: /usr/lib/libXpm.so
examples/ex_synth: /usr/lib/libXinerama.so
examples/ex_synth: /usr/lib/libXrandr.so
examples/ex_synth: /usr/lib/libOpenGL.so
examples/ex_synth: /usr/lib/libGLU.so
examples/ex_synth: /usr/lib/libGLX.so
examples/ex_synth: examples/CMakeFiles/ex_synth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex_synth"
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_synth.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/ex_synth.dir/build: examples/ex_synth

.PHONY : examples/CMakeFiles/ex_synth.dir/build

examples/CMakeFiles/ex_synth.dir/clean:
	cd /home/adalbs/Documentos/allegro5/examples && $(CMAKE_COMMAND) -P CMakeFiles/ex_synth.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/ex_synth.dir/clean

examples/CMakeFiles/ex_synth.dir/depend:
	cd /home/adalbs/Documentos/allegro5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/examples /home/adalbs/Documentos/allegro5/examples/CMakeFiles/ex_synth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/ex_synth.dir/depend

