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
CMAKE_SOURCE_DIR = /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build

# Include any dependencies generated for this target.
include src/CMakeFiles/alignament.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/alignament.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/alignament.dir/flags.make

src/CMakeFiles/alignament.dir/main.cpp.o: src/CMakeFiles/alignament.dir/flags.make
src/CMakeFiles/alignament.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/alignament.dir/main.cpp.o"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/alignament.dir/main.cpp.o -c /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src/main.cpp

src/CMakeFiles/alignament.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/alignament.dir/main.cpp.i"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src/main.cpp > CMakeFiles/alignament.dir/main.cpp.i

src/CMakeFiles/alignament.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/alignament.dir/main.cpp.s"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src/main.cpp -o CMakeFiles/alignament.dir/main.cpp.s

# Object files for target alignament
alignament_OBJECTS = \
"CMakeFiles/alignament.dir/main.cpp.o"

# External object files for target alignament
alignament_EXTERNAL_OBJECTS =

src/alignament: src/CMakeFiles/alignament.dir/main.cpp.o
src/alignament: src/CMakeFiles/alignament.dir/build.make
src/alignament: src/Analyzer/libAnalyzer.a
src/alignament: src/Generator/libGenerator.a
src/alignament: src/Converter/libConverter.a
src/alignament: src/CMakeFiles/alignament.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable alignament"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/alignament.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/alignament.dir/build: src/alignament

.PHONY : src/CMakeFiles/alignament.dir/build

src/CMakeFiles/alignament.dir/clean:
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src && $(CMAKE_COMMAND) -P CMakeFiles/alignament.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/alignament.dir/clean

src/CMakeFiles/alignament.dir/depend:
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3 /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/CMakeFiles/alignament.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/alignament.dir/depend

