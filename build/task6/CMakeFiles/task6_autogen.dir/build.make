# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/introduction-to-qt-tasks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/introduction-to-qt-tasks/build

# Utility rule file for task6_autogen.

# Include any custom commands dependencies for this target.
include task6/CMakeFiles/task6_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include task6/CMakeFiles/task6_autogen.dir/progress.make

task6/CMakeFiles/task6_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/introduction-to-qt-tasks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target task6"
	cd /home/user/introduction-to-qt-tasks/build/task6 && /usr/bin/cmake -E cmake_autogen /home/user/introduction-to-qt-tasks/build/task6/CMakeFiles/task6_autogen.dir/AutogenInfo.json Debug

task6_autogen: task6/CMakeFiles/task6_autogen
task6_autogen: task6/CMakeFiles/task6_autogen.dir/build.make
.PHONY : task6_autogen

# Rule to build all files generated by this target.
task6/CMakeFiles/task6_autogen.dir/build: task6_autogen
.PHONY : task6/CMakeFiles/task6_autogen.dir/build

task6/CMakeFiles/task6_autogen.dir/clean:
	cd /home/user/introduction-to-qt-tasks/build/task6 && $(CMAKE_COMMAND) -P CMakeFiles/task6_autogen.dir/cmake_clean.cmake
.PHONY : task6/CMakeFiles/task6_autogen.dir/clean

task6/CMakeFiles/task6_autogen.dir/depend:
	cd /home/user/introduction-to-qt-tasks/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/introduction-to-qt-tasks /home/user/introduction-to-qt-tasks/task6 /home/user/introduction-to-qt-tasks/build /home/user/introduction-to-qt-tasks/build/task6 /home/user/introduction-to-qt-tasks/build/task6/CMakeFiles/task6_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : task6/CMakeFiles/task6_autogen.dir/depend

