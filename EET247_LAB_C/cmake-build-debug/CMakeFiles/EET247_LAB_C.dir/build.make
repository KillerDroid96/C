# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/mkell/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/mkell/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EET247_LAB_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EET247_LAB_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EET247_LAB_C.dir/flags.make

CMakeFiles/EET247_LAB_C.dir/main.c.o: CMakeFiles/EET247_LAB_C.dir/flags.make
CMakeFiles/EET247_LAB_C.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EET247_LAB_C.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/EET247_LAB_C.dir/main.c.o   -c /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/main.c

CMakeFiles/EET247_LAB_C.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EET247_LAB_C.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/main.c > CMakeFiles/EET247_LAB_C.dir/main.c.i

CMakeFiles/EET247_LAB_C.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EET247_LAB_C.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/main.c -o CMakeFiles/EET247_LAB_C.dir/main.c.s

CMakeFiles/EET247_LAB_C.dir/main.c.o.requires:

.PHONY : CMakeFiles/EET247_LAB_C.dir/main.c.o.requires

CMakeFiles/EET247_LAB_C.dir/main.c.o.provides: CMakeFiles/EET247_LAB_C.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/EET247_LAB_C.dir/build.make CMakeFiles/EET247_LAB_C.dir/main.c.o.provides.build
.PHONY : CMakeFiles/EET247_LAB_C.dir/main.c.o.provides

CMakeFiles/EET247_LAB_C.dir/main.c.o.provides.build: CMakeFiles/EET247_LAB_C.dir/main.c.o


# Object files for target EET247_LAB_C
EET247_LAB_C_OBJECTS = \
"CMakeFiles/EET247_LAB_C.dir/main.c.o"

# External object files for target EET247_LAB_C
EET247_LAB_C_EXTERNAL_OBJECTS =

EET247_LAB_C.exe: CMakeFiles/EET247_LAB_C.dir/main.c.o
EET247_LAB_C.exe: CMakeFiles/EET247_LAB_C.dir/build.make
EET247_LAB_C.exe: CMakeFiles/EET247_LAB_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable EET247_LAB_C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EET247_LAB_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EET247_LAB_C.dir/build: EET247_LAB_C.exe

.PHONY : CMakeFiles/EET247_LAB_C.dir/build

CMakeFiles/EET247_LAB_C.dir/requires: CMakeFiles/EET247_LAB_C.dir/main.c.o.requires

.PHONY : CMakeFiles/EET247_LAB_C.dir/requires

CMakeFiles/EET247_LAB_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EET247_LAB_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EET247_LAB_C.dir/clean

CMakeFiles/EET247_LAB_C.dir/depend:
	cd /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/cmake-build-debug /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/cmake-build-debug /cygdrive/c/Users/mkell/Desktop/Coding/Github/C/EET247_LAB_C/cmake-build-debug/CMakeFiles/EET247_LAB_C.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EET247_LAB_C.dir/depend

