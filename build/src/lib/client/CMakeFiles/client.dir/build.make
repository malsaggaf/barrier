# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/nvidia/Desktop/Barrier/barrier

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nvidia/Desktop/Barrier/barrier/build

# Include any dependencies generated for this target.
include src/lib/client/CMakeFiles/client.dir/depend.make

# Include the progress variables for this target.
include src/lib/client/CMakeFiles/client.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/client/CMakeFiles/client.dir/flags.make

src/lib/client/CMakeFiles/client.dir/Client.cpp.o: src/lib/client/CMakeFiles/client.dir/flags.make
src/lib/client/CMakeFiles/client.dir/Client.cpp.o: ../src/lib/client/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/client/CMakeFiles/client.dir/Client.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/Client.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/client/Client.cpp

src/lib/client/CMakeFiles/client.dir/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/Client.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/client/Client.cpp > CMakeFiles/client.dir/Client.cpp.i

src/lib/client/CMakeFiles/client.dir/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/Client.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/client/Client.cpp -o CMakeFiles/client.dir/Client.cpp.s

src/lib/client/CMakeFiles/client.dir/Client.cpp.o.requires:

.PHONY : src/lib/client/CMakeFiles/client.dir/Client.cpp.o.requires

src/lib/client/CMakeFiles/client.dir/Client.cpp.o.provides: src/lib/client/CMakeFiles/client.dir/Client.cpp.o.requires
	$(MAKE) -f src/lib/client/CMakeFiles/client.dir/build.make src/lib/client/CMakeFiles/client.dir/Client.cpp.o.provides.build
.PHONY : src/lib/client/CMakeFiles/client.dir/Client.cpp.o.provides

src/lib/client/CMakeFiles/client.dir/Client.cpp.o.provides.build: src/lib/client/CMakeFiles/client.dir/Client.cpp.o


src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o: src/lib/client/CMakeFiles/client.dir/flags.make
src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o: ../src/lib/client/ServerProxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/ServerProxy.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/client/ServerProxy.cpp

src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/ServerProxy.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/client/ServerProxy.cpp > CMakeFiles/client.dir/ServerProxy.cpp.i

src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/ServerProxy.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/client/ServerProxy.cpp -o CMakeFiles/client.dir/ServerProxy.cpp.s

src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.requires:

.PHONY : src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.requires

src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.provides: src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.requires
	$(MAKE) -f src/lib/client/CMakeFiles/client.dir/build.make src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.provides.build
.PHONY : src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.provides

src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.provides.build: src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o


# Object files for target client
client_OBJECTS = \
"CMakeFiles/client.dir/Client.cpp.o" \
"CMakeFiles/client.dir/ServerProxy.cpp.o"

# External object files for target client
client_EXTERNAL_OBJECTS =

src/lib/client/libclient.a: src/lib/client/CMakeFiles/client.dir/Client.cpp.o
src/lib/client/libclient.a: src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o
src/lib/client/libclient.a: src/lib/client/CMakeFiles/client.dir/build.make
src/lib/client/libclient.a: src/lib/client/CMakeFiles/client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libclient.a"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && $(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean_target.cmake
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/client/CMakeFiles/client.dir/build: src/lib/client/libclient.a

.PHONY : src/lib/client/CMakeFiles/client.dir/build

src/lib/client/CMakeFiles/client.dir/requires: src/lib/client/CMakeFiles/client.dir/Client.cpp.o.requires
src/lib/client/CMakeFiles/client.dir/requires: src/lib/client/CMakeFiles/client.dir/ServerProxy.cpp.o.requires

.PHONY : src/lib/client/CMakeFiles/client.dir/requires

src/lib/client/CMakeFiles/client.dir/clean:
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client && $(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean.cmake
.PHONY : src/lib/client/CMakeFiles/client.dir/clean

src/lib/client/CMakeFiles/client.dir/depend:
	cd /home/nvidia/Desktop/Barrier/barrier/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nvidia/Desktop/Barrier/barrier /home/nvidia/Desktop/Barrier/barrier/src/lib/client /home/nvidia/Desktop/Barrier/barrier/build /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client /home/nvidia/Desktop/Barrier/barrier/build/src/lib/client/CMakeFiles/client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lib/client/CMakeFiles/client.dir/depend

