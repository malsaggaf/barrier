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
include src/cmd/barriers/CMakeFiles/barriers.dir/depend.make

# Include the progress variables for this target.
include src/cmd/barriers/CMakeFiles/barriers.dir/progress.make

# Include the compile flags for this target's objects.
include src/cmd/barriers/CMakeFiles/barriers.dir/flags.make

src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o: src/cmd/barriers/CMakeFiles/barriers.dir/flags.make
src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o: ../src/cmd/barriers/barriers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/barriers.dir/barriers.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/cmd/barriers/barriers.cpp

src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/barriers.dir/barriers.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/cmd/barriers/barriers.cpp > CMakeFiles/barriers.dir/barriers.cpp.i

src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/barriers.dir/barriers.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/cmd/barriers/barriers.cpp -o CMakeFiles/barriers.dir/barriers.cpp.s

src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.requires:

.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.requires

src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.provides: src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.requires
	$(MAKE) -f src/cmd/barriers/CMakeFiles/barriers.dir/build.make src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.provides.build
.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.provides

src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.provides.build: src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o


src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o: src/cmd/barriers/CMakeFiles/barriers.dir/flags.make
src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o: ../src/cmd/barriers/XWindowsServerTaskBarReceiver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/cmd/barriers/XWindowsServerTaskBarReceiver.cpp

src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/cmd/barriers/XWindowsServerTaskBarReceiver.cpp > CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.i

src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/cmd/barriers/XWindowsServerTaskBarReceiver.cpp -o CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.s

src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.requires:

.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.requires

src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.provides: src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.requires
	$(MAKE) -f src/cmd/barriers/CMakeFiles/barriers.dir/build.make src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.provides.build
.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.provides

src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.provides.build: src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o


# Object files for target barriers
barriers_OBJECTS = \
"CMakeFiles/barriers.dir/barriers.cpp.o" \
"CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o"

# External object files for target barriers
barriers_EXTERNAL_OBJECTS =

bin/barriers: src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o
bin/barriers: src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o
bin/barriers: src/cmd/barriers/CMakeFiles/barriers.dir/build.make
bin/barriers: src/lib/arch/libarch.a
bin/barriers: src/lib/base/libbase.a
bin/barriers: src/lib/client/libclient.a
bin/barriers: src/lib/common/libcommon.a
bin/barriers: src/lib/io/libio.a
bin/barriers: src/lib/mt/libmt.a
bin/barriers: src/lib/net/libnet.a
bin/barriers: src/lib/ipc/libipc.a
bin/barriers: src/lib/platform/libplatform.a
bin/barriers: src/lib/server/libserver.a
bin/barriers: src/lib/barrier/libsynlib.a
bin/barriers: /usr/lib/aarch64-linux-gnu/libcurl.so
bin/barriers: src/lib/client/libclient.a
bin/barriers: src/lib/ipc/libipc.a
bin/barriers: src/lib/platform/libplatform.a
bin/barriers: src/lib/server/libserver.a
bin/barriers: src/lib/barrier/libsynlib.a
bin/barriers: src/lib/arch/libarch.a
bin/barriers: /usr/lib/aarch64-linux-gnu/libcurl.so
bin/barriers: src/lib/base/libbase.a
bin/barriers: src/lib/common/libcommon.a
bin/barriers: src/lib/net/libnet.a
bin/barriers: src/lib/io/libio.a
bin/barriers: src/lib/mt/libmt.a
bin/barriers: src/cmd/barriers/CMakeFiles/barriers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../../bin/barriers"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/barriers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/cmd/barriers/CMakeFiles/barriers.dir/build: bin/barriers

.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/build

src/cmd/barriers/CMakeFiles/barriers.dir/requires: src/cmd/barriers/CMakeFiles/barriers.dir/barriers.cpp.o.requires
src/cmd/barriers/CMakeFiles/barriers.dir/requires: src/cmd/barriers/CMakeFiles/barriers.dir/XWindowsServerTaskBarReceiver.cpp.o.requires

.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/requires

src/cmd/barriers/CMakeFiles/barriers.dir/clean:
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers && $(CMAKE_COMMAND) -P CMakeFiles/barriers.dir/cmake_clean.cmake
.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/clean

src/cmd/barriers/CMakeFiles/barriers.dir/depend:
	cd /home/nvidia/Desktop/Barrier/barrier/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nvidia/Desktop/Barrier/barrier /home/nvidia/Desktop/Barrier/barrier/src/cmd/barriers /home/nvidia/Desktop/Barrier/barrier/build /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers /home/nvidia/Desktop/Barrier/barrier/build/src/cmd/barriers/CMakeFiles/barriers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/cmd/barriers/CMakeFiles/barriers.dir/depend

