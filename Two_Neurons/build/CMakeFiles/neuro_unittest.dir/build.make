# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/localguest/Desktop/Neuron_prog/Two_Neurons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/localguest/Desktop/Neuron_prog/Two_Neurons/build

# Include any dependencies generated for this target.
include CMakeFiles/neuro_unittest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/neuro_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/neuro_unittest.dir/flags.make

CMakeFiles/neuro_unittest.dir/neurone.cpp.o: CMakeFiles/neuro_unittest.dir/flags.make
CMakeFiles/neuro_unittest.dir/neurone.cpp.o: ../neurone.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/localguest/Desktop/Neuron_prog/Two_Neurons/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/neuro_unittest.dir/neurone.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/neuro_unittest.dir/neurone.cpp.o -c /home/localguest/Desktop/Neuron_prog/Two_Neurons/neurone.cpp

CMakeFiles/neuro_unittest.dir/neurone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuro_unittest.dir/neurone.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/localguest/Desktop/Neuron_prog/Two_Neurons/neurone.cpp > CMakeFiles/neuro_unittest.dir/neurone.cpp.i

CMakeFiles/neuro_unittest.dir/neurone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuro_unittest.dir/neurone.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/localguest/Desktop/Neuron_prog/Two_Neurons/neurone.cpp -o CMakeFiles/neuro_unittest.dir/neurone.cpp.s

CMakeFiles/neuro_unittest.dir/neurone.cpp.o.requires:
.PHONY : CMakeFiles/neuro_unittest.dir/neurone.cpp.o.requires

CMakeFiles/neuro_unittest.dir/neurone.cpp.o.provides: CMakeFiles/neuro_unittest.dir/neurone.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuro_unittest.dir/build.make CMakeFiles/neuro_unittest.dir/neurone.cpp.o.provides.build
.PHONY : CMakeFiles/neuro_unittest.dir/neurone.cpp.o.provides

CMakeFiles/neuro_unittest.dir/neurone.cpp.o.provides.build: CMakeFiles/neuro_unittest.dir/neurone.cpp.o

CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o: CMakeFiles/neuro_unittest.dir/flags.make
CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o: ../neuronTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/localguest/Desktop/Neuron_prog/Two_Neurons/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o -c /home/localguest/Desktop/Neuron_prog/Two_Neurons/neuronTest.cpp

CMakeFiles/neuro_unittest.dir/neuronTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/neuro_unittest.dir/neuronTest.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/localguest/Desktop/Neuron_prog/Two_Neurons/neuronTest.cpp > CMakeFiles/neuro_unittest.dir/neuronTest.cpp.i

CMakeFiles/neuro_unittest.dir/neuronTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/neuro_unittest.dir/neuronTest.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/localguest/Desktop/Neuron_prog/Two_Neurons/neuronTest.cpp -o CMakeFiles/neuro_unittest.dir/neuronTest.cpp.s

CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.requires:
.PHONY : CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.requires

CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.provides: CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/neuro_unittest.dir/build.make CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.provides.build
.PHONY : CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.provides

CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.provides.build: CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o

# Object files for target neuro_unittest
neuro_unittest_OBJECTS = \
"CMakeFiles/neuro_unittest.dir/neurone.cpp.o" \
"CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o"

# External object files for target neuro_unittest
neuro_unittest_EXTERNAL_OBJECTS =

neuro_unittest: CMakeFiles/neuro_unittest.dir/neurone.cpp.o
neuro_unittest: CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o
neuro_unittest: CMakeFiles/neuro_unittest.dir/build.make
neuro_unittest: googletest/libgtest.a
neuro_unittest: googletest/libgtest_main.a
neuro_unittest: googletest/libgtest.a
neuro_unittest: CMakeFiles/neuro_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable neuro_unittest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/neuro_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/neuro_unittest.dir/build: neuro_unittest
.PHONY : CMakeFiles/neuro_unittest.dir/build

CMakeFiles/neuro_unittest.dir/requires: CMakeFiles/neuro_unittest.dir/neurone.cpp.o.requires
CMakeFiles/neuro_unittest.dir/requires: CMakeFiles/neuro_unittest.dir/neuronTest.cpp.o.requires
.PHONY : CMakeFiles/neuro_unittest.dir/requires

CMakeFiles/neuro_unittest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/neuro_unittest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/neuro_unittest.dir/clean

CMakeFiles/neuro_unittest.dir/depend:
	cd /home/localguest/Desktop/Neuron_prog/Two_Neurons/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/localguest/Desktop/Neuron_prog/Two_Neurons /home/localguest/Desktop/Neuron_prog/Two_Neurons /home/localguest/Desktop/Neuron_prog/Two_Neurons/build /home/localguest/Desktop/Neuron_prog/Two_Neurons/build /home/localguest/Desktop/Neuron_prog/Two_Neurons/build/CMakeFiles/neuro_unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/neuro_unittest.dir/depend

