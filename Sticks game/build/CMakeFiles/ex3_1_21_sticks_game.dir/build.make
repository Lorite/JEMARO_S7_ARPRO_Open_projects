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
CMAKE_SOURCE_DIR = "/media/sf_ARPRO_Labs/Open_projects/Sticks game"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/sf_ARPRO_Labs/Open_projects/Sticks game/build"

# Include any dependencies generated for this target.
include CMakeFiles/ex3_1_21_sticks_game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex3_1_21_sticks_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex3_1_21_sticks_game.dir/flags.make

CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.o: CMakeFiles/ex3_1_21_sticks_game.dir/flags.make
CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.o: ../ex3_1_21_sticks_game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/sf_ARPRO_Labs/Open_projects/Sticks game/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.o -c "/media/sf_ARPRO_Labs/Open_projects/Sticks game/ex3_1_21_sticks_game.cpp"

CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/sf_ARPRO_Labs/Open_projects/Sticks game/ex3_1_21_sticks_game.cpp" > CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.i

CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/sf_ARPRO_Labs/Open_projects/Sticks game/ex3_1_21_sticks_game.cpp" -o CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.s

# Object files for target ex3_1_21_sticks_game
ex3_1_21_sticks_game_OBJECTS = \
"CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.o"

# External object files for target ex3_1_21_sticks_game
ex3_1_21_sticks_game_EXTERNAL_OBJECTS =

ex3_1_21_sticks_game: CMakeFiles/ex3_1_21_sticks_game.dir/ex3_1_21_sticks_game.cpp.o
ex3_1_21_sticks_game: CMakeFiles/ex3_1_21_sticks_game.dir/build.make
ex3_1_21_sticks_game: CMakeFiles/ex3_1_21_sticks_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/sf_ARPRO_Labs/Open_projects/Sticks game/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex3_1_21_sticks_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex3_1_21_sticks_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex3_1_21_sticks_game.dir/build: ex3_1_21_sticks_game

.PHONY : CMakeFiles/ex3_1_21_sticks_game.dir/build

CMakeFiles/ex3_1_21_sticks_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex3_1_21_sticks_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex3_1_21_sticks_game.dir/clean

CMakeFiles/ex3_1_21_sticks_game.dir/depend:
	cd "/media/sf_ARPRO_Labs/Open_projects/Sticks game/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/sf_ARPRO_Labs/Open_projects/Sticks game" "/media/sf_ARPRO_Labs/Open_projects/Sticks game" "/media/sf_ARPRO_Labs/Open_projects/Sticks game/build" "/media/sf_ARPRO_Labs/Open_projects/Sticks game/build" "/media/sf_ARPRO_Labs/Open_projects/Sticks game/build/CMakeFiles/ex3_1_21_sticks_game.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ex3_1_21_sticks_game.dir/depend
