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
CMAKE_SOURCE_DIR = /home/debial/GameEngine/Engine/Physick

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debial/GameEngine/Engine/Physick/build

# Include any dependencies generated for this target.
include CMakeFiles/force_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/force_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/force_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/force_test.dir/flags.make

CMakeFiles/force_test.dir/tests/force_test.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/tests/force_test.cpp.o: ../tests/force_test.cpp
CMakeFiles/force_test.dir/tests/force_test.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/force_test.dir/tests/force_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/tests/force_test.cpp.o -MF CMakeFiles/force_test.dir/tests/force_test.cpp.o.d -o CMakeFiles/force_test.dir/tests/force_test.cpp.o -c /home/debial/GameEngine/Engine/Physick/tests/force_test.cpp

CMakeFiles/force_test.dir/tests/force_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/tests/force_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/tests/force_test.cpp > CMakeFiles/force_test.dir/tests/force_test.cpp.i

CMakeFiles/force_test.dir/tests/force_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/tests/force_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/tests/force_test.cpp -o CMakeFiles/force_test.dir/tests/force_test.cpp.s

CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o: /home/debial/GameEngine/Engine/General/object/object.cpp
CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o -MF CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o.d -o CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o -c /home/debial/GameEngine/Engine/General/object/object.cpp

CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/General/object/object.cpp > CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.i

CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/General/object/object.cpp -o CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.s

CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o: ../src/coordinate/coord.cpp
CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o -MF CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o.d -o CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp

CMakeFiles/force_test.dir/src/coordinate/coord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/src/coordinate/coord.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp > CMakeFiles/force_test.dir/src/coordinate/coord.cpp.i

CMakeFiles/force_test.dir/src/coordinate/coord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/src/coordinate/coord.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp -o CMakeFiles/force_test.dir/src/coordinate/coord.cpp.s

CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o: ../src/exception/PhysickException.cpp
CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o -MF CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o.d -o CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp

CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp > CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.i

CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp -o CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.s

CMakeFiles/force_test.dir/src/force/Force.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/src/force/Force.cpp.o: ../src/force/Force.cpp
CMakeFiles/force_test.dir/src/force/Force.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/force_test.dir/src/force/Force.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/src/force/Force.cpp.o -MF CMakeFiles/force_test.dir/src/force/Force.cpp.o.d -o CMakeFiles/force_test.dir/src/force/Force.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/force/Force.cpp

CMakeFiles/force_test.dir/src/force/Force.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/src/force/Force.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/force/Force.cpp > CMakeFiles/force_test.dir/src/force/Force.cpp.i

CMakeFiles/force_test.dir/src/force/Force.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/src/force/Force.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/force/Force.cpp -o CMakeFiles/force_test.dir/src/force/Force.cpp.s

CMakeFiles/force_test.dir/src/force/MyForce.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/src/force/MyForce.cpp.o: ../src/force/MyForce.cpp
CMakeFiles/force_test.dir/src/force/MyForce.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/force_test.dir/src/force/MyForce.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/src/force/MyForce.cpp.o -MF CMakeFiles/force_test.dir/src/force/MyForce.cpp.o.d -o CMakeFiles/force_test.dir/src/force/MyForce.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp

CMakeFiles/force_test.dir/src/force/MyForce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/src/force/MyForce.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp > CMakeFiles/force_test.dir/src/force/MyForce.cpp.i

CMakeFiles/force_test.dir/src/force/MyForce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/src/force/MyForce.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp -o CMakeFiles/force_test.dir/src/force/MyForce.cpp.s

CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o: ../src/object/PhysicalObject.cpp
CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o -MF CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o.d -o CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp

CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp > CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.i

CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp -o CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.s

CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o: CMakeFiles/force_test.dir/flags.make
CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o: ../src/storage/ObjectStorage.cpp
CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o: CMakeFiles/force_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o -MF CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o.d -o CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/storage/ObjectStorage.cpp

CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/storage/ObjectStorage.cpp > CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.i

CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/storage/ObjectStorage.cpp -o CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.s

# Object files for target force_test
force_test_OBJECTS = \
"CMakeFiles/force_test.dir/tests/force_test.cpp.o" \
"CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o" \
"CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o" \
"CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o" \
"CMakeFiles/force_test.dir/src/force/Force.cpp.o" \
"CMakeFiles/force_test.dir/src/force/MyForce.cpp.o" \
"CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o" \
"CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o"

# External object files for target force_test
force_test_EXTERNAL_OBJECTS =

../bin/force_test: CMakeFiles/force_test.dir/tests/force_test.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/home/debial/GameEngine/Engine/General/object/object.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/src/coordinate/coord.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/src/exception/PhysickException.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/src/force/Force.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/src/force/MyForce.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/src/object/PhysicalObject.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/src/storage/ObjectStorage.cpp.o
../bin/force_test: CMakeFiles/force_test.dir/build.make
../bin/force_test: lib/libgtest_main.a
../bin/force_test: lib/libgtest.a
../bin/force_test: CMakeFiles/force_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/debial/GameEngine/Engine/Physick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ../bin/force_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/force_test.dir/link.txt --verbose=$(VERBOSE)
	/usr/bin/cmake -D TEST_TARGET=force_test -D TEST_EXECUTABLE=/home/debial/GameEngine/Engine/Physick/bin/force_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/debial/GameEngine/Engine/Physick/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=force_test_TESTS -D CTEST_FILE=/home/debial/GameEngine/Engine/Physick/build/force_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/force_test.dir/build: ../bin/force_test
.PHONY : CMakeFiles/force_test.dir/build

CMakeFiles/force_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/force_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/force_test.dir/clean

CMakeFiles/force_test.dir/depend:
	cd /home/debial/GameEngine/Engine/Physick/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debial/GameEngine/Engine/Physick /home/debial/GameEngine/Engine/Physick /home/debial/GameEngine/Engine/Physick/build /home/debial/GameEngine/Engine/Physick/build /home/debial/GameEngine/Engine/Physick/build/CMakeFiles/force_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/force_test.dir/depend

