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
CMAKE_COMMAND = /cygdrive/c/Users/mwruc/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/mwruc/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Git/308/CIS-308/Project2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project2.dir/flags.make

CMakeFiles/Project2.dir/proj2.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/proj2.c.o: ../proj2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Project2.dir/proj2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/proj2.c.o   -c /cygdrive/c/Git/308/CIS-308/Project2/proj2.c

CMakeFiles/Project2.dir/proj2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/proj2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Git/308/CIS-308/Project2/proj2.c > CMakeFiles/Project2.dir/proj2.c.i

CMakeFiles/Project2.dir/proj2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/proj2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Git/308/CIS-308/Project2/proj2.c -o CMakeFiles/Project2.dir/proj2.c.s

CMakeFiles/Project2.dir/bst.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/bst.c.o: ../bst.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Project2.dir/bst.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/bst.c.o   -c /cygdrive/c/Git/308/CIS-308/Project2/bst.c

CMakeFiles/Project2.dir/bst.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/bst.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Git/308/CIS-308/Project2/bst.c > CMakeFiles/Project2.dir/bst.c.i

CMakeFiles/Project2.dir/bst.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/bst.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Git/308/CIS-308/Project2/bst.c -o CMakeFiles/Project2.dir/bst.c.s

CMakeFiles/Project2.dir/io.c.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/io.c.o: ../io.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Project2.dir/io.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Project2.dir/io.c.o   -c /cygdrive/c/Git/308/CIS-308/Project2/io.c

CMakeFiles/Project2.dir/io.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project2.dir/io.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Git/308/CIS-308/Project2/io.c > CMakeFiles/Project2.dir/io.c.i

CMakeFiles/Project2.dir/io.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project2.dir/io.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Git/308/CIS-308/Project2/io.c -o CMakeFiles/Project2.dir/io.c.s

# Object files for target Project2
Project2_OBJECTS = \
"CMakeFiles/Project2.dir/proj2.c.o" \
"CMakeFiles/Project2.dir/bst.c.o" \
"CMakeFiles/Project2.dir/io.c.o"

# External object files for target Project2
Project2_EXTERNAL_OBJECTS =

Project2.exe: CMakeFiles/Project2.dir/proj2.c.o
Project2.exe: CMakeFiles/Project2.dir/bst.c.o
Project2.exe: CMakeFiles/Project2.dir/io.c.o
Project2.exe: CMakeFiles/Project2.dir/build.make
Project2.exe: CMakeFiles/Project2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Project2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project2.dir/build: Project2.exe

.PHONY : CMakeFiles/Project2.dir/build

CMakeFiles/Project2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project2.dir/clean

CMakeFiles/Project2.dir/depend:
	cd /cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Git/308/CIS-308/Project2 /cygdrive/c/Git/308/CIS-308/Project2 /cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug /cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug /cygdrive/c/Git/308/CIS-308/Project2/cmake-build-debug/CMakeFiles/Project2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project2.dir/depend
