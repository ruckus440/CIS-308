# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /cygdrive/c/Git/308/CIS-308/inclassProj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/inclassProj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/inclassProj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/inclassProj.dir/flags.make

CMakeFiles/inclassProj.dir/main.c.o: CMakeFiles/inclassProj.dir/flags.make
CMakeFiles/inclassProj.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/inclassProj.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/inclassProj.dir/main.c.o   -c /cygdrive/c/Git/308/CIS-308/inclassProj/main.c

CMakeFiles/inclassProj.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/inclassProj.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Git/308/CIS-308/inclassProj/main.c > CMakeFiles/inclassProj.dir/main.c.i

CMakeFiles/inclassProj.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/inclassProj.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Git/308/CIS-308/inclassProj/main.c -o CMakeFiles/inclassProj.dir/main.c.s

CMakeFiles/inclassProj.dir/person.c.o: CMakeFiles/inclassProj.dir/flags.make
CMakeFiles/inclassProj.dir/person.c.o: ../person.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/inclassProj.dir/person.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/inclassProj.dir/person.c.o   -c /cygdrive/c/Git/308/CIS-308/inclassProj/person.c

CMakeFiles/inclassProj.dir/person.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/inclassProj.dir/person.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Git/308/CIS-308/inclassProj/person.c > CMakeFiles/inclassProj.dir/person.c.i

CMakeFiles/inclassProj.dir/person.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/inclassProj.dir/person.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Git/308/CIS-308/inclassProj/person.c -o CMakeFiles/inclassProj.dir/person.c.s

CMakeFiles/inclassProj.dir/Employee.c.o: CMakeFiles/inclassProj.dir/flags.make
CMakeFiles/inclassProj.dir/Employee.c.o: ../Employee.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/inclassProj.dir/Employee.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/inclassProj.dir/Employee.c.o   -c /cygdrive/c/Git/308/CIS-308/inclassProj/Employee.c

CMakeFiles/inclassProj.dir/Employee.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/inclassProj.dir/Employee.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Git/308/CIS-308/inclassProj/Employee.c > CMakeFiles/inclassProj.dir/Employee.c.i

CMakeFiles/inclassProj.dir/Employee.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/inclassProj.dir/Employee.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Git/308/CIS-308/inclassProj/Employee.c -o CMakeFiles/inclassProj.dir/Employee.c.s

# Object files for target inclassProj
inclassProj_OBJECTS = \
"CMakeFiles/inclassProj.dir/main.c.o" \
"CMakeFiles/inclassProj.dir/person.c.o" \
"CMakeFiles/inclassProj.dir/Employee.c.o"

# External object files for target inclassProj
inclassProj_EXTERNAL_OBJECTS =

inclassProj.exe: CMakeFiles/inclassProj.dir/main.c.o
inclassProj.exe: CMakeFiles/inclassProj.dir/person.c.o
inclassProj.exe: CMakeFiles/inclassProj.dir/Employee.c.o
inclassProj.exe: CMakeFiles/inclassProj.dir/build.make
inclassProj.exe: CMakeFiles/inclassProj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable inclassProj.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/inclassProj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/inclassProj.dir/build: inclassProj.exe

.PHONY : CMakeFiles/inclassProj.dir/build

CMakeFiles/inclassProj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/inclassProj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/inclassProj.dir/clean

CMakeFiles/inclassProj.dir/depend:
	cd /cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Git/308/CIS-308/inclassProj /cygdrive/c/Git/308/CIS-308/inclassProj /cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug /cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug /cygdrive/c/Git/308/CIS-308/inclassProj/cmake-build-debug/CMakeFiles/inclassProj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/inclassProj.dir/depend

