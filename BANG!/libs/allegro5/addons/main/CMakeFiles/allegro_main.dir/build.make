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
include addons/main/CMakeFiles/allegro_main.dir/depend.make

# Include the progress variables for this target.
include addons/main/CMakeFiles/allegro_main.dir/progress.make

# Include the compile flags for this target's objects.
include addons/main/CMakeFiles/allegro_main.dir/flags.make

addons/main/CMakeFiles/allegro_main.dir/generic_main.c.o: addons/main/CMakeFiles/allegro_main.dir/flags.make
addons/main/CMakeFiles/allegro_main.dir/generic_main.c.o: addons/main/generic_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object addons/main/CMakeFiles/allegro_main.dir/generic_main.c.o"
	cd /home/adalbs/Documentos/allegro5/addons/main && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/allegro_main.dir/generic_main.c.o   -c /home/adalbs/Documentos/allegro5/addons/main/generic_main.c

addons/main/CMakeFiles/allegro_main.dir/generic_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_main.dir/generic_main.c.i"
	cd /home/adalbs/Documentos/allegro5/addons/main && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adalbs/Documentos/allegro5/addons/main/generic_main.c > CMakeFiles/allegro_main.dir/generic_main.c.i

addons/main/CMakeFiles/allegro_main.dir/generic_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_main.dir/generic_main.c.s"
	cd /home/adalbs/Documentos/allegro5/addons/main && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adalbs/Documentos/allegro5/addons/main/generic_main.c -o CMakeFiles/allegro_main.dir/generic_main.c.s

# Object files for target allegro_main
allegro_main_OBJECTS = \
"CMakeFiles/allegro_main.dir/generic_main.c.o"

# External object files for target allegro_main
allegro_main_EXTERNAL_OBJECTS =

lib/liballegro_main.so.5.2.6: addons/main/CMakeFiles/allegro_main.dir/generic_main.c.o
lib/liballegro_main.so.5.2.6: addons/main/CMakeFiles/allegro_main.dir/build.make
lib/liballegro_main.so.5.2.6: lib/liballegro.so.5.2.6
lib/liballegro_main.so.5.2.6: /usr/lib/libSM.so
lib/liballegro_main.so.5.2.6: /usr/lib/libICE.so
lib/liballegro_main.so.5.2.6: /usr/lib/libX11.so
lib/liballegro_main.so.5.2.6: /usr/lib/libXext.so
lib/liballegro_main.so.5.2.6: /usr/lib/libXcursor.so
lib/liballegro_main.so.5.2.6: /usr/lib/libXpm.so
lib/liballegro_main.so.5.2.6: /usr/lib/libXinerama.so
lib/liballegro_main.so.5.2.6: /usr/lib/libXrandr.so
lib/liballegro_main.so.5.2.6: /usr/lib/libOpenGL.so
lib/liballegro_main.so.5.2.6: /usr/lib/libGLU.so
lib/liballegro_main.so.5.2.6: /usr/lib/libGLX.so
lib/liballegro_main.so.5.2.6: addons/main/CMakeFiles/allegro_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../../lib/liballegro_main.so"
	cd /home/adalbs/Documentos/allegro5/addons/main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/allegro_main.dir/link.txt --verbose=$(VERBOSE)
	cd /home/adalbs/Documentos/allegro5/addons/main && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/liballegro_main.so.5.2.6 ../../lib/liballegro_main.so.5.2 ../../lib/liballegro_main.so

lib/liballegro_main.so.5.2: lib/liballegro_main.so.5.2.6
	@$(CMAKE_COMMAND) -E touch_nocreate lib/liballegro_main.so.5.2

lib/liballegro_main.so: lib/liballegro_main.so.5.2.6
	@$(CMAKE_COMMAND) -E touch_nocreate lib/liballegro_main.so

# Rule to build all files generated by this target.
addons/main/CMakeFiles/allegro_main.dir/build: lib/liballegro_main.so

.PHONY : addons/main/CMakeFiles/allegro_main.dir/build

addons/main/CMakeFiles/allegro_main.dir/clean:
	cd /home/adalbs/Documentos/allegro5/addons/main && $(CMAKE_COMMAND) -P CMakeFiles/allegro_main.dir/cmake_clean.cmake
.PHONY : addons/main/CMakeFiles/allegro_main.dir/clean

addons/main/CMakeFiles/allegro_main.dir/depend:
	cd /home/adalbs/Documentos/allegro5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/addons/main /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/addons/main /home/adalbs/Documentos/allegro5/addons/main/CMakeFiles/allegro_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : addons/main/CMakeFiles/allegro_main.dir/depend

