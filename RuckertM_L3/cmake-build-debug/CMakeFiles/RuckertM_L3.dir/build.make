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
CMAKE_SOURCE_DIR = /cygdrive/c/Git/308/CIS-308/RuckertM_L3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Git/308/CIS-308/RuckertM_L3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/RuckertM_L3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RuckertM_L3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RuckertM_L3.dir/flags.make

CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.o: CMakeFiles/RuckertM_L3.dir/flags.make
CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.o: ../RuckertM_L3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Git/308/CIS-308/RuckertM_L3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.o   -c /cygdrive/c/Git/308/CIS-308/RuckertM_L3/RuckertM_L3.c

CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Git/308/CIS-308/RuckertM_L3/RuckertM_L3.c > CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.i

CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Git/308/CIS-308/RuckertM_L3/RuckertM_L3.c -o CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.s

# Object files for target RuckertM_L3
RuckertM_L3_OBJECTS = \
"CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.o"

# External object files for target RuckertM_L3
RuckertM_L3_EXTERNAL_OBJECTS =

RuckertM_L3.exe: CMakeFiles/RuckertM_L3.dir/RuckertM_L3.c.o
RuckertM_L3.exe: CMakeFiles/RuckertM_L3.dir/build.make
RuckertM_L3.exe: CMakeFiles/RuckertM_L3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Git/308/CIS-308/RuckertM_L3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable RuckertM_L3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RuckertM_L3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RuckertM_L3.dir/build: RuckertM_L3.exe

.PHONY : CMakeFiles/RuckertM_L3.dir/build

CMakeFiles/RuckertM_L3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RuckertM_L3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RuckertM_L3.dir/clean

CMakeFiles/RuckertM_L3.dir/depend:
	cd /cygdrive/c/Git/308/CIS-308/RuckertM_L3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Git/308/CIS-308/RuckertM_L3 /cygdrive/c/Git/308/CIS-308/RuckertM_L3 /cygdrive/c/Git/308/CIS-308/RuckertM_L3/cmake-build-debug /cygdrive/c/Git/308/CIS-308/RuckertM_L3/cmake-build-debug /cygdrive/c/Git/308/CIS-308/RuckertM_L3/cmake-build-debug/CMakeFiles/RuckertM_L3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RuckertM_L3.dir/depend

