# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\c projects\C programming\array"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\c projects\C programming\array\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/array.dir/flags.make

CMakeFiles/array.dir/main.c.obj: CMakeFiles/array.dir/flags.make
CMakeFiles/array.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\c projects\C programming\array\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/array.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\array.dir\main.c.obj   -c "D:\c projects\C programming\array\main.c"

CMakeFiles/array.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/array.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\c projects\C programming\array\main.c" > CMakeFiles\array.dir\main.c.i

CMakeFiles/array.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/array.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\c projects\C programming\array\main.c" -o CMakeFiles\array.dir\main.c.s

# Object files for target array
array_OBJECTS = \
"CMakeFiles/array.dir/main.c.obj"

# External object files for target array
array_EXTERNAL_OBJECTS =

array.exe: CMakeFiles/array.dir/main.c.obj
array.exe: CMakeFiles/array.dir/build.make
array.exe: CMakeFiles/array.dir/linklibs.rsp
array.exe: CMakeFiles/array.dir/objects1.rsp
array.exe: CMakeFiles/array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\c projects\C programming\array\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable array.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\array.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/array.dir/build: array.exe

.PHONY : CMakeFiles/array.dir/build

CMakeFiles/array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\array.dir\cmake_clean.cmake
.PHONY : CMakeFiles/array.dir/clean

CMakeFiles/array.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\c projects\C programming\array" "D:\c projects\C programming\array" "D:\c projects\C programming\array\cmake-build-debug" "D:\c projects\C programming\array\cmake-build-debug" "D:\c projects\C programming\array\cmake-build-debug\CMakeFiles\array.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/array.dir/depend

