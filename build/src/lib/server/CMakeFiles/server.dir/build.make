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
include src/lib/server/CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include src/lib/server/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/server/CMakeFiles/server.dir/flags.make

src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o: ../src/lib/server/BaseClientProxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/BaseClientProxy.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/BaseClientProxy.cpp

src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/BaseClientProxy.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/BaseClientProxy.cpp > CMakeFiles/server.dir/BaseClientProxy.cpp.i

src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/BaseClientProxy.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/BaseClientProxy.cpp -o CMakeFiles/server.dir/BaseClientProxy.cpp.s

src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o: ../src/lib/server/ClientListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientListener.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientListener.cpp

src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientListener.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientListener.cpp > CMakeFiles/server.dir/ClientListener.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientListener.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientListener.cpp -o CMakeFiles/server.dir/ClientListener.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o: ../src/lib/server/ClientProxy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy.cpp > CMakeFiles/server.dir/ClientProxy.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy.cpp -o CMakeFiles/server.dir/ClientProxy.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o: ../src/lib/server/ClientProxy1_0.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy1_0.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_0.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy1_0.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_0.cpp > CMakeFiles/server.dir/ClientProxy1_0.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy1_0.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_0.cpp -o CMakeFiles/server.dir/ClientProxy1_0.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o: ../src/lib/server/ClientProxy1_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy1_1.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_1.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy1_1.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_1.cpp > CMakeFiles/server.dir/ClientProxy1_1.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy1_1.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_1.cpp -o CMakeFiles/server.dir/ClientProxy1_1.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o: ../src/lib/server/ClientProxy1_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy1_2.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_2.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy1_2.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_2.cpp > CMakeFiles/server.dir/ClientProxy1_2.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy1_2.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_2.cpp -o CMakeFiles/server.dir/ClientProxy1_2.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o: ../src/lib/server/ClientProxy1_3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy1_3.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_3.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy1_3.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_3.cpp > CMakeFiles/server.dir/ClientProxy1_3.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy1_3.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_3.cpp -o CMakeFiles/server.dir/ClientProxy1_3.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o: ../src/lib/server/ClientProxy1_4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy1_4.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_4.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy1_4.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_4.cpp > CMakeFiles/server.dir/ClientProxy1_4.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy1_4.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_4.cpp -o CMakeFiles/server.dir/ClientProxy1_4.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o: ../src/lib/server/ClientProxy1_5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy1_5.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_5.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy1_5.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_5.cpp > CMakeFiles/server.dir/ClientProxy1_5.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy1_5.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_5.cpp -o CMakeFiles/server.dir/ClientProxy1_5.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o: ../src/lib/server/ClientProxy1_6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxy1_6.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_6.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxy1_6.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_6.cpp > CMakeFiles/server.dir/ClientProxy1_6.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxy1_6.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxy1_6.cpp -o CMakeFiles/server.dir/ClientProxy1_6.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o


src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o: ../src/lib/server/ClientProxyUnknown.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientProxyUnknown.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxyUnknown.cpp

src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientProxyUnknown.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxyUnknown.cpp > CMakeFiles/server.dir/ClientProxyUnknown.cpp.i

src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientProxyUnknown.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/ClientProxyUnknown.cpp -o CMakeFiles/server.dir/ClientProxyUnknown.cpp.s

src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o


src/lib/server/CMakeFiles/server.dir/Config.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/Config.cpp.o: ../src/lib/server/Config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/lib/server/CMakeFiles/server.dir/Config.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/Config.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/Config.cpp

src/lib/server/CMakeFiles/server.dir/Config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/Config.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/Config.cpp > CMakeFiles/server.dir/Config.cpp.i

src/lib/server/CMakeFiles/server.dir/Config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/Config.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/Config.cpp -o CMakeFiles/server.dir/Config.cpp.s

src/lib/server/CMakeFiles/server.dir/Config.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/Config.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/Config.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/Config.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/Config.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/Config.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/Config.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/Config.cpp.o


src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o: ../src/lib/server/InputFilter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/InputFilter.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/InputFilter.cpp

src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/InputFilter.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/InputFilter.cpp > CMakeFiles/server.dir/InputFilter.cpp.i

src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/InputFilter.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/InputFilter.cpp -o CMakeFiles/server.dir/InputFilter.cpp.s

src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o


src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o: ../src/lib/server/PrimaryClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/PrimaryClient.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/PrimaryClient.cpp

src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/PrimaryClient.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/PrimaryClient.cpp > CMakeFiles/server.dir/PrimaryClient.cpp.i

src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/PrimaryClient.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/PrimaryClient.cpp -o CMakeFiles/server.dir/PrimaryClient.cpp.s

src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o


src/lib/server/CMakeFiles/server.dir/Server.cpp.o: src/lib/server/CMakeFiles/server.dir/flags.make
src/lib/server/CMakeFiles/server.dir/Server.cpp.o: ../src/lib/server/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object src/lib/server/CMakeFiles/server.dir/Server.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/Server.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/server/Server.cpp

src/lib/server/CMakeFiles/server.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/Server.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/server/Server.cpp > CMakeFiles/server.dir/Server.cpp.i

src/lib/server/CMakeFiles/server.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/Server.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/server/Server.cpp -o CMakeFiles/server.dir/Server.cpp.s

src/lib/server/CMakeFiles/server.dir/Server.cpp.o.requires:

.PHONY : src/lib/server/CMakeFiles/server.dir/Server.cpp.o.requires

src/lib/server/CMakeFiles/server.dir/Server.cpp.o.provides: src/lib/server/CMakeFiles/server.dir/Server.cpp.o.requires
	$(MAKE) -f src/lib/server/CMakeFiles/server.dir/build.make src/lib/server/CMakeFiles/server.dir/Server.cpp.o.provides.build
.PHONY : src/lib/server/CMakeFiles/server.dir/Server.cpp.o.provides

src/lib/server/CMakeFiles/server.dir/Server.cpp.o.provides.build: src/lib/server/CMakeFiles/server.dir/Server.cpp.o


# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/BaseClientProxy.cpp.o" \
"CMakeFiles/server.dir/ClientListener.cpp.o" \
"CMakeFiles/server.dir/ClientProxy.cpp.o" \
"CMakeFiles/server.dir/ClientProxy1_0.cpp.o" \
"CMakeFiles/server.dir/ClientProxy1_1.cpp.o" \
"CMakeFiles/server.dir/ClientProxy1_2.cpp.o" \
"CMakeFiles/server.dir/ClientProxy1_3.cpp.o" \
"CMakeFiles/server.dir/ClientProxy1_4.cpp.o" \
"CMakeFiles/server.dir/ClientProxy1_5.cpp.o" \
"CMakeFiles/server.dir/ClientProxy1_6.cpp.o" \
"CMakeFiles/server.dir/ClientProxyUnknown.cpp.o" \
"CMakeFiles/server.dir/Config.cpp.o" \
"CMakeFiles/server.dir/InputFilter.cpp.o" \
"CMakeFiles/server.dir/PrimaryClient.cpp.o" \
"CMakeFiles/server.dir/Server.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/Config.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/Server.cpp.o
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/build.make
src/lib/server/libserver.a: src/lib/server/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX static library libserver.a"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean_target.cmake
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/server/CMakeFiles/server.dir/build: src/lib/server/libserver.a

.PHONY : src/lib/server/CMakeFiles/server.dir/build

src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/BaseClientProxy.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientListener.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy1_0.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy1_1.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy1_2.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy1_3.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy1_4.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy1_5.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxy1_6.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/ClientProxyUnknown.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/Config.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/InputFilter.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/PrimaryClient.cpp.o.requires
src/lib/server/CMakeFiles/server.dir/requires: src/lib/server/CMakeFiles/server.dir/Server.cpp.o.requires

.PHONY : src/lib/server/CMakeFiles/server.dir/requires

src/lib/server/CMakeFiles/server.dir/clean:
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : src/lib/server/CMakeFiles/server.dir/clean

src/lib/server/CMakeFiles/server.dir/depend:
	cd /home/nvidia/Desktop/Barrier/barrier/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nvidia/Desktop/Barrier/barrier /home/nvidia/Desktop/Barrier/barrier/src/lib/server /home/nvidia/Desktop/Barrier/barrier/build /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server /home/nvidia/Desktop/Barrier/barrier/build/src/lib/server/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lib/server/CMakeFiles/server.dir/depend

