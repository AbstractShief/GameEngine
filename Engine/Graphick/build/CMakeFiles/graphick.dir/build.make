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
CMAKE_SOURCE_DIR = /home/debial/GameEngine/Engine/Graphick

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debial/GameEngine/Engine/Graphick/build

# Include any dependencies generated for this target.
include CMakeFiles/graphick.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/graphick.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/graphick.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/graphick.dir/flags.make

CMakeFiles/graphick.dir/main.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/main.cpp.o: ../main.cpp
CMakeFiles/graphick.dir/main.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/graphick.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/main.cpp.o -MF CMakeFiles/graphick.dir/main.cpp.o.d -o CMakeFiles/graphick.dir/main.cpp.o -c /home/debial/GameEngine/Engine/Graphick/main.cpp

CMakeFiles/graphick.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Graphick/main.cpp > CMakeFiles/graphick.dir/main.cpp.i

CMakeFiles/graphick.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Graphick/main.cpp -o CMakeFiles/graphick.dir/main.cpp.s

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o: /home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o -MF CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o.d -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp > CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.i

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.s

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o: /home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o -MF CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o.d -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp > CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.i

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.s

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o: /home/debial/GameEngine/Engine/Physick/src/force/Force.cpp
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o -MF CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o.d -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/force/Force.cpp

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/force/Force.cpp > CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.i

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/force/Force.cpp -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.s

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o: /home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o -MF CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o.d -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp > CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.i

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.s

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o: /home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp
CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o -MF CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o.d -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o -c /home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp > CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.i

CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp -o CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.s

CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o: ../src/exception/GraphickException.cpp
CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o -MF CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o.d -o CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o -c /home/debial/GameEngine/Engine/Graphick/src/exception/GraphickException.cpp

CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Graphick/src/exception/GraphickException.cpp > CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.i

CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Graphick/src/exception/GraphickException.cpp -o CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.s

CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o: ../src/object/geometry/geometry.cpp
CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o -MF CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o.d -o CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o -c /home/debial/GameEngine/Engine/Graphick/src/object/geometry/geometry.cpp

CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Graphick/src/object/geometry/geometry.cpp > CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.i

CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Graphick/src/object/geometry/geometry.cpp -o CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.s

CMakeFiles/graphick.dir/src/object/image/image.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/src/object/image/image.cpp.o: ../src/object/image/image.cpp
CMakeFiles/graphick.dir/src/object/image/image.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/graphick.dir/src/object/image/image.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/src/object/image/image.cpp.o -MF CMakeFiles/graphick.dir/src/object/image/image.cpp.o.d -o CMakeFiles/graphick.dir/src/object/image/image.cpp.o -c /home/debial/GameEngine/Engine/Graphick/src/object/image/image.cpp

CMakeFiles/graphick.dir/src/object/image/image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/src/object/image/image.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Graphick/src/object/image/image.cpp > CMakeFiles/graphick.dir/src/object/image/image.cpp.i

CMakeFiles/graphick.dir/src/object/image/image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/src/object/image/image.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Graphick/src/object/image/image.cpp -o CMakeFiles/graphick.dir/src/object/image/image.cpp.s

CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o: CMakeFiles/graphick.dir/flags.make
CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o: ../src/object/interface/GraphickObject.cpp
CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o: CMakeFiles/graphick.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o -MF CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o.d -o CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o -c /home/debial/GameEngine/Engine/Graphick/src/object/interface/GraphickObject.cpp

CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/debial/GameEngine/Engine/Graphick/src/object/interface/GraphickObject.cpp > CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.i

CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/debial/GameEngine/Engine/Graphick/src/object/interface/GraphickObject.cpp -o CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.s

# Object files for target graphick
graphick_OBJECTS = \
"CMakeFiles/graphick.dir/main.cpp.o" \
"CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o" \
"CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o" \
"CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o" \
"CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o" \
"CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o" \
"CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o" \
"CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o" \
"CMakeFiles/graphick.dir/src/object/image/image.cpp.o" \
"CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o"

# External object files for target graphick
graphick_EXTERNAL_OBJECTS =

../bin/graphick: CMakeFiles/graphick.dir/main.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/coordinate/coord.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/exception/PhysickException.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/Force.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/force/MyForce.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/home/debial/GameEngine/Engine/Physick/src/object/PhysicalObject.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/src/exception/GraphickException.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/src/object/geometry/geometry.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/src/object/image/image.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/src/object/interface/GraphickObject.cpp.o
../bin/graphick: CMakeFiles/graphick.dir/build.make
../bin/graphick: /usr/local/lib/libSDL2.so
../bin/graphick: CMakeFiles/graphick.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/debial/GameEngine/Engine/Graphick/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ../bin/graphick"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graphick.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/graphick.dir/build: ../bin/graphick
.PHONY : CMakeFiles/graphick.dir/build

CMakeFiles/graphick.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/graphick.dir/cmake_clean.cmake
.PHONY : CMakeFiles/graphick.dir/clean

CMakeFiles/graphick.dir/depend:
	cd /home/debial/GameEngine/Engine/Graphick/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debial/GameEngine/Engine/Graphick /home/debial/GameEngine/Engine/Graphick /home/debial/GameEngine/Engine/Graphick/build /home/debial/GameEngine/Engine/Graphick/build /home/debial/GameEngine/Engine/Graphick/build/CMakeFiles/graphick.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/graphick.dir/depend

