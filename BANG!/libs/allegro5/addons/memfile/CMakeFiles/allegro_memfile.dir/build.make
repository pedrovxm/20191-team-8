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
include addons/memfile/CMakeFiles/allegro_memfile.dir/depend.make

# Include the progress variables for this target.
include addons/memfile/CMakeFiles/allegro_memfile.dir/progress.make

# Include the compile flags for this target's objects.
include addons/memfile/CMakeFiles/allegro_memfile.dir/flags.make

addons/memfile/CMakeFiles/allegro_memfile.dir/memfile.c.o: addons/memfile/CMakeFiles/allegro_memfile.dir/flags.make
addons/memfile/CMakeFiles/allegro_memfile.dir/memfile.c.o: addons/memfile/memfile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object addons/memfile/CMakeFiles/allegro_memfile.dir/memfile.c.o"
	cd /home/adalbs/Documentos/allegro5/addons/memfile && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/allegro_memfile.dir/memfile.c.o   -c /home/adalbs/Documentos/allegro5/addons/memfile/memfile.c

addons/memfile/CMakeFiles/allegro_memfile.dir/memfile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_memfile.dir/memfile.c.i"
	cd /home/adalbs/Documentos/allegro5/addons/memfile && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adalbs/Documentos/allegro5/addons/memfile/memfile.c > CMakeFiles/allegro_memfile.dir/memfile.c.i

addons/memfile/CMakeFiles/allegro_memfile.dir/memfile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_memfile.dir/memfile.c.s"
	cd /home/adalbs/Documentos/allegro5/addons/memfile && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adalbs/Documentos/allegro5/addons/memfile/memfile.c -o CMakeFiles/allegro_memfile.dir/memfile.c.s

# Object files for target allegro_memfile
allegro_memfile_OBJECTS = \
"CMakeFiles/allegro_memfile.dir/memfile.c.o"

# External object files for target allegro_memfile
allegro_memfile_EXTERNAL_OBJECTS =

lib/liballegro_memfile.so.5.2.6: addons/memfile/CMakeFiles/allegro_memfile.dir/memfile.c.o
lib/liballegro_memfile.so.5.2.6: addons/memfile/CMakeFiles/allegro_memfile.dir/build.make
lib/liballegro_memfile.so.5.2.6: lib/liballegro.so.5.2.6
lib/liballegro_memfile.so.5.2.6: /usr/lib/libSM.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libICE.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libX11.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libXext.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libXcursor.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libXpm.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libXinerama.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libXrandr.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libOpenGL.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libGLU.so
lib/liballegro_memfile.so.5.2.6: /usr/lib/libGLX.so
lib/liballegro_memfile.so.5.2.6: addons/memfile/CMakeFiles/allegro_memfile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adalbs/Documentos/allegro5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../../lib/liballegro_memfile.so"
	cd /home/adalbs/Documentos/allegro5/addons/memfile && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/allegro_memfile.dir/link.txt --verbose=$(VERBOSE)
	cd /home/adalbs/Documentos/allegro5/addons/memfile && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/liballegro_memfile.so.5.2.6 ../../lib/liballegro_memfile.so.5.2 ../../lib/liballegro_memfile.so

lib/liballegro_memfile.so.5.2: lib/liballegro_memfile.so.5.2.6
	@$(CMAKE_COMMAND) -E touch_nocreate lib/liballegro_memfile.so.5.2

lib/liballegro_memfile.so: lib/liballegro_memfile.so.5.2.6
	@$(CMAKE_COMMAND) -E touch_nocreate lib/liballegro_memfile.so

# Rule to build all files generated by this target.
addons/memfile/CMakeFiles/allegro_memfile.dir/build: lib/liballegro_memfile.so

.PHONY : addons/memfile/CMakeFiles/allegro_memfile.dir/build

addons/memfile/CMakeFiles/allegro_memfile.dir/clean:
	cd /home/adalbs/Documentos/allegro5/addons/memfile && $(CMAKE_COMMAND) -P CMakeFiles/allegro_memfile.dir/cmake_clean.cmake
.PHONY : addons/memfile/CMakeFiles/allegro_memfile.dir/clean

addons/memfile/CMakeFiles/allegro_memfile.dir/depend:
	cd /home/adalbs/Documentos/allegro5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/addons/memfile /home/adalbs/Documentos/allegro5 /home/adalbs/Documentos/allegro5/addons/memfile /home/adalbs/Documentos/allegro5/addons/memfile/CMakeFiles/allegro_memfile.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : addons/memfile/CMakeFiles/allegro_memfile.dir/depend
