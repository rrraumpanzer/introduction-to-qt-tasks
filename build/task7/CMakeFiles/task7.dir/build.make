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

# Include any dependencies generated for this target.
include task7/CMakeFiles/task7.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include task7/CMakeFiles/task7.dir/compiler_depend.make

# Include the progress variables for this target.
include task7/CMakeFiles/task7.dir/progress.make

# Include the compile flags for this target's objects.
include task7/CMakeFiles/task7.dir/flags.make

task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o: task7/CMakeFiles/task7.dir/flags.make
task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o: task7/task7_autogen/mocs_compilation.cpp
task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o: task7/CMakeFiles/task7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/introduction-to-qt-tasks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o"
	cd /home/user/introduction-to-qt-tasks/build/task7 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o -MF CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o -c /home/user/introduction-to-qt-tasks/build/task7/task7_autogen/mocs_compilation.cpp

task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.i"
	cd /home/user/introduction-to-qt-tasks/build/task7 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/introduction-to-qt-tasks/build/task7/task7_autogen/mocs_compilation.cpp > CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.i

task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.s"
	cd /home/user/introduction-to-qt-tasks/build/task7 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/introduction-to-qt-tasks/build/task7/task7_autogen/mocs_compilation.cpp -o CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.s

task7/CMakeFiles/task7.dir/main.cpp.o: task7/CMakeFiles/task7.dir/flags.make
task7/CMakeFiles/task7.dir/main.cpp.o: ../task7/main.cpp
task7/CMakeFiles/task7.dir/main.cpp.o: task7/CMakeFiles/task7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/introduction-to-qt-tasks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object task7/CMakeFiles/task7.dir/main.cpp.o"
	cd /home/user/introduction-to-qt-tasks/build/task7 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT task7/CMakeFiles/task7.dir/main.cpp.o -MF CMakeFiles/task7.dir/main.cpp.o.d -o CMakeFiles/task7.dir/main.cpp.o -c /home/user/introduction-to-qt-tasks/task7/main.cpp

task7/CMakeFiles/task7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task7.dir/main.cpp.i"
	cd /home/user/introduction-to-qt-tasks/build/task7 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/introduction-to-qt-tasks/task7/main.cpp > CMakeFiles/task7.dir/main.cpp.i

task7/CMakeFiles/task7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task7.dir/main.cpp.s"
	cd /home/user/introduction-to-qt-tasks/build/task7 && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/introduction-to-qt-tasks/task7/main.cpp -o CMakeFiles/task7.dir/main.cpp.s

# Object files for target task7
task7_OBJECTS = \
"CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/task7.dir/main.cpp.o"

# External object files for target task7
task7_EXTERNAL_OBJECTS =

task7/task7: task7/CMakeFiles/task7.dir/task7_autogen/mocs_compilation.cpp.o
task7/task7: task7/CMakeFiles/task7.dir/main.cpp.o
task7/task7: task7/CMakeFiles/task7.dir/build.make
task7/task7: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
task7/task7: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
task7/task7: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
task7/task7: task7/CMakeFiles/task7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/introduction-to-qt-tasks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable task7"
	cd /home/user/introduction-to-qt-tasks/build/task7 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
task7/CMakeFiles/task7.dir/build: task7/task7
.PHONY : task7/CMakeFiles/task7.dir/build

task7/CMakeFiles/task7.dir/clean:
	cd /home/user/introduction-to-qt-tasks/build/task7 && $(CMAKE_COMMAND) -P CMakeFiles/task7.dir/cmake_clean.cmake
.PHONY : task7/CMakeFiles/task7.dir/clean

task7/CMakeFiles/task7.dir/depend:
	cd /home/user/introduction-to-qt-tasks/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/introduction-to-qt-tasks /home/user/introduction-to-qt-tasks/task7 /home/user/introduction-to-qt-tasks/build /home/user/introduction-to-qt-tasks/build/task7 /home/user/introduction-to-qt-tasks/build/task7/CMakeFiles/task7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : task7/CMakeFiles/task7.dir/depend
