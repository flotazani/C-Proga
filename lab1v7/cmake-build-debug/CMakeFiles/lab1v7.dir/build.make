# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/andreikonovalov/Documents/ITMO/lab1v7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/andreikonovalov/Documents/ITMO/lab1v7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab1v7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab1v7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab1v7.dir/flags.make

CMakeFiles/lab1v7.dir/main.c.o: CMakeFiles/lab1v7.dir/flags.make
CMakeFiles/lab1v7.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/andreikonovalov/Documents/ITMO/lab1v7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab1v7.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab1v7.dir/main.c.o   -c /Users/andreikonovalov/Documents/ITMO/lab1v7/main.c

CMakeFiles/lab1v7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab1v7.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/andreikonovalov/Documents/ITMO/lab1v7/main.c > CMakeFiles/lab1v7.dir/main.c.i

CMakeFiles/lab1v7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab1v7.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/andreikonovalov/Documents/ITMO/lab1v7/main.c -o CMakeFiles/lab1v7.dir/main.c.s

CMakeFiles/lab1v7.dir/main.c.o.requires:

.PHONY : CMakeFiles/lab1v7.dir/main.c.o.requires

CMakeFiles/lab1v7.dir/main.c.o.provides: CMakeFiles/lab1v7.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/lab1v7.dir/build.make CMakeFiles/lab1v7.dir/main.c.o.provides.build
.PHONY : CMakeFiles/lab1v7.dir/main.c.o.provides

CMakeFiles/lab1v7.dir/main.c.o.provides.build: CMakeFiles/lab1v7.dir/main.c.o


# Object files for target lab1v7
lab1v7_OBJECTS = \
"CMakeFiles/lab1v7.dir/main.c.o"

# External object files for target lab1v7
lab1v7_EXTERNAL_OBJECTS =

lab1v7: CMakeFiles/lab1v7.dir/main.c.o
lab1v7: CMakeFiles/lab1v7.dir/build.make
lab1v7: CMakeFiles/lab1v7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/andreikonovalov/Documents/ITMO/lab1v7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lab1v7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab1v7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab1v7.dir/build: lab1v7

.PHONY : CMakeFiles/lab1v7.dir/build

CMakeFiles/lab1v7.dir/requires: CMakeFiles/lab1v7.dir/main.c.o.requires

.PHONY : CMakeFiles/lab1v7.dir/requires

CMakeFiles/lab1v7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab1v7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab1v7.dir/clean

CMakeFiles/lab1v7.dir/depend:
	cd /Users/andreikonovalov/Documents/ITMO/lab1v7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/andreikonovalov/Documents/ITMO/lab1v7 /Users/andreikonovalov/Documents/ITMO/lab1v7 /Users/andreikonovalov/Documents/ITMO/lab1v7/cmake-build-debug /Users/andreikonovalov/Documents/ITMO/lab1v7/cmake-build-debug /Users/andreikonovalov/Documents/ITMO/lab1v7/cmake-build-debug/CMakeFiles/lab1v7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab1v7.dir/depend

