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
include src/Converter/CMakeFiles/Converter.dir/depend.make

# Include the progress variables for this target.
include src/Converter/CMakeFiles/Converter.dir/progress.make

# Include the compile flags for this target's objects.
include src/Converter/CMakeFiles/Converter.dir/flags.make

src/Converter/CMakeFiles/Converter.dir/DNAConverter.cpp.o: src/Converter/CMakeFiles/Converter.dir/flags.make
src/Converter/CMakeFiles/Converter.dir/DNAConverter.cpp.o: ../src/Converter/DNAConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Converter/CMakeFiles/Converter.dir/DNAConverter.cpp.o"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Converter.dir/DNAConverter.cpp.o -c /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src/Converter/DNAConverter.cpp

src/Converter/CMakeFiles/Converter.dir/DNAConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Converter.dir/DNAConverter.cpp.i"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src/Converter/DNAConverter.cpp > CMakeFiles/Converter.dir/DNAConverter.cpp.i

src/Converter/CMakeFiles/Converter.dir/DNAConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Converter.dir/DNAConverter.cpp.s"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src/Converter/DNAConverter.cpp -o CMakeFiles/Converter.dir/DNAConverter.cpp.s

# Object files for target Converter
Converter_OBJECTS = \
"CMakeFiles/Converter.dir/DNAConverter.cpp.o"

# External object files for target Converter
Converter_EXTERNAL_OBJECTS =

src/Converter/libConverter.a: src/Converter/CMakeFiles/Converter.dir/DNAConverter.cpp.o
src/Converter/libConverter.a: src/Converter/CMakeFiles/Converter.dir/build.make
src/Converter/libConverter.a: src/Converter/CMakeFiles/Converter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libConverter.a"
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter && $(CMAKE_COMMAND) -P CMakeFiles/Converter.dir/cmake_clean_target.cmake
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Converter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Converter/CMakeFiles/Converter.dir/build: src/Converter/libConverter.a

.PHONY : src/Converter/CMakeFiles/Converter.dir/build

src/Converter/CMakeFiles/Converter.dir/clean:
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter && $(CMAKE_COMMAND) -P CMakeFiles/Converter.dir/cmake_clean.cmake
.PHONY : src/Converter/CMakeFiles/Converter.dir/clean

src/Converter/CMakeFiles/Converter.dir/depend:
	cd /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3 /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/src/Converter /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter /home/sebi/Desktop/PAOO/Teme/PAOO/Tema3/build/src/Converter/CMakeFiles/Converter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Converter/CMakeFiles/Converter.dir/depend

