# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/media/sf_ARPRO_Labs/Open_projects/Simple player games"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/sf_ARPRO_Labs/Open_projects/Simple player games/build"

# Include any dependencies generated for this target.
include CMakeFiles/ex2_2_rock_paper_scissors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex2_2_rock_paper_scissors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex2_2_rock_paper_scissors.dir/flags.make

CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.o: CMakeFiles/ex2_2_rock_paper_scissors.dir/flags.make
CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.o: ../ex2_2_rock_paper_scissors.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/sf_ARPRO_Labs/Open_projects/Simple player games/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.o -c "/media/sf_ARPRO_Labs/Open_projects/Simple player games/ex2_2_rock_paper_scissors.cpp"

CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/sf_ARPRO_Labs/Open_projects/Simple player games/ex2_2_rock_paper_scissors.cpp" > CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.i

CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/sf_ARPRO_Labs/Open_projects/Simple player games/ex2_2_rock_paper_scissors.cpp" -o CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.s

# Object files for target ex2_2_rock_paper_scissors
ex2_2_rock_paper_scissors_OBJECTS = \
"CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.o"

# External object files for target ex2_2_rock_paper_scissors
ex2_2_rock_paper_scissors_EXTERNAL_OBJECTS =

ex2_2_rock_paper_scissors: CMakeFiles/ex2_2_rock_paper_scissors.dir/ex2_2_rock_paper_scissors.cpp.o
ex2_2_rock_paper_scissors: CMakeFiles/ex2_2_rock_paper_scissors.dir/build.make
ex2_2_rock_paper_scissors: CMakeFiles/ex2_2_rock_paper_scissors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/sf_ARPRO_Labs/Open_projects/Simple player games/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex2_2_rock_paper_scissors"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex2_2_rock_paper_scissors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex2_2_rock_paper_scissors.dir/build: ex2_2_rock_paper_scissors

.PHONY : CMakeFiles/ex2_2_rock_paper_scissors.dir/build

CMakeFiles/ex2_2_rock_paper_scissors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex2_2_rock_paper_scissors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex2_2_rock_paper_scissors.dir/clean

CMakeFiles/ex2_2_rock_paper_scissors.dir/depend:
	cd "/media/sf_ARPRO_Labs/Open_projects/Simple player games/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/sf_ARPRO_Labs/Open_projects/Simple player games" "/media/sf_ARPRO_Labs/Open_projects/Simple player games" "/media/sf_ARPRO_Labs/Open_projects/Simple player games/build" "/media/sf_ARPRO_Labs/Open_projects/Simple player games/build" "/media/sf_ARPRO_Labs/Open_projects/Simple player games/build/CMakeFiles/ex2_2_rock_paper_scissors.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex2_2_rock_paper_scissors.dir/depend
