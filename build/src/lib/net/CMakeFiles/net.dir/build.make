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
include src/lib/net/CMakeFiles/net.dir/depend.make

# Include the progress variables for this target.
include src/lib/net/CMakeFiles/net.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/net/CMakeFiles/net.dir/flags.make

src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o: ../src/lib/net/FingerprintData.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/FingerprintData.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/FingerprintData.cpp

src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/FingerprintData.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/FingerprintData.cpp > CMakeFiles/net.dir/FingerprintData.cpp.i

src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/FingerprintData.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/FingerprintData.cpp -o CMakeFiles/net.dir/FingerprintData.cpp.s

src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o


src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o: ../src/lib/net/FingerprintDatabase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/FingerprintDatabase.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/FingerprintDatabase.cpp

src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/FingerprintDatabase.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/FingerprintDatabase.cpp > CMakeFiles/net.dir/FingerprintDatabase.cpp.i

src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/FingerprintDatabase.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/FingerprintDatabase.cpp -o CMakeFiles/net.dir/FingerprintDatabase.cpp.s

src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o


src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o: ../src/lib/net/IDataSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/IDataSocket.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/IDataSocket.cpp

src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/IDataSocket.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/IDataSocket.cpp > CMakeFiles/net.dir/IDataSocket.cpp.i

src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/IDataSocket.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/IDataSocket.cpp -o CMakeFiles/net.dir/IDataSocket.cpp.s

src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o


src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o: ../src/lib/net/NetworkAddress.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/NetworkAddress.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/NetworkAddress.cpp

src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/NetworkAddress.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/NetworkAddress.cpp > CMakeFiles/net.dir/NetworkAddress.cpp.i

src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/NetworkAddress.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/NetworkAddress.cpp -o CMakeFiles/net.dir/NetworkAddress.cpp.s

src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o


src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o: ../src/lib/net/SecureListenSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/SecureListenSocket.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureListenSocket.cpp

src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/SecureListenSocket.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureListenSocket.cpp > CMakeFiles/net.dir/SecureListenSocket.cpp.i

src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/SecureListenSocket.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureListenSocket.cpp -o CMakeFiles/net.dir/SecureListenSocket.cpp.s

src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o


src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o: ../src/lib/net/SecureSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/SecureSocket.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureSocket.cpp

src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/SecureSocket.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureSocket.cpp > CMakeFiles/net.dir/SecureSocket.cpp.i

src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/SecureSocket.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureSocket.cpp -o CMakeFiles/net.dir/SecureSocket.cpp.s

src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o


src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o: ../src/lib/net/SecureUtils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/SecureUtils.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureUtils.cpp

src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/SecureUtils.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureUtils.cpp > CMakeFiles/net.dir/SecureUtils.cpp.i

src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/SecureUtils.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SecureUtils.cpp -o CMakeFiles/net.dir/SecureUtils.cpp.s

src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o


src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o: ../src/lib/net/SocketMultiplexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/SocketMultiplexer.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SocketMultiplexer.cpp

src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/SocketMultiplexer.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SocketMultiplexer.cpp > CMakeFiles/net.dir/SocketMultiplexer.cpp.i

src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/SocketMultiplexer.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/SocketMultiplexer.cpp -o CMakeFiles/net.dir/SocketMultiplexer.cpp.s

src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o


src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o: ../src/lib/net/TCPListenSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/TCPListenSocket.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPListenSocket.cpp

src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/TCPListenSocket.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPListenSocket.cpp > CMakeFiles/net.dir/TCPListenSocket.cpp.i

src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/TCPListenSocket.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPListenSocket.cpp -o CMakeFiles/net.dir/TCPListenSocket.cpp.s

src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o


src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o: ../src/lib/net/TCPSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/TCPSocket.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPSocket.cpp

src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/TCPSocket.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPSocket.cpp > CMakeFiles/net.dir/TCPSocket.cpp.i

src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/TCPSocket.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPSocket.cpp -o CMakeFiles/net.dir/TCPSocket.cpp.s

src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o


src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o: ../src/lib/net/TCPSocketFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/TCPSocketFactory.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPSocketFactory.cpp

src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/TCPSocketFactory.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPSocketFactory.cpp > CMakeFiles/net.dir/TCPSocketFactory.cpp.i

src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/TCPSocketFactory.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/TCPSocketFactory.cpp -o CMakeFiles/net.dir/TCPSocketFactory.cpp.s

src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o


src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o: src/lib/net/CMakeFiles/net.dir/flags.make
src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o: ../src/lib/net/XSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/net.dir/XSocket.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/lib/net/XSocket.cpp

src/lib/net/CMakeFiles/net.dir/XSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/net.dir/XSocket.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/lib/net/XSocket.cpp > CMakeFiles/net.dir/XSocket.cpp.i

src/lib/net/CMakeFiles/net.dir/XSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/net.dir/XSocket.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/lib/net/XSocket.cpp -o CMakeFiles/net.dir/XSocket.cpp.s

src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.requires:

.PHONY : src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.requires

src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.provides: src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.requires
	$(MAKE) -f src/lib/net/CMakeFiles/net.dir/build.make src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.provides.build
.PHONY : src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.provides

src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.provides.build: src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o


# Object files for target net
net_OBJECTS = \
"CMakeFiles/net.dir/FingerprintData.cpp.o" \
"CMakeFiles/net.dir/FingerprintDatabase.cpp.o" \
"CMakeFiles/net.dir/IDataSocket.cpp.o" \
"CMakeFiles/net.dir/NetworkAddress.cpp.o" \
"CMakeFiles/net.dir/SecureListenSocket.cpp.o" \
"CMakeFiles/net.dir/SecureSocket.cpp.o" \
"CMakeFiles/net.dir/SecureUtils.cpp.o" \
"CMakeFiles/net.dir/SocketMultiplexer.cpp.o" \
"CMakeFiles/net.dir/TCPListenSocket.cpp.o" \
"CMakeFiles/net.dir/TCPSocket.cpp.o" \
"CMakeFiles/net.dir/TCPSocketFactory.cpp.o" \
"CMakeFiles/net.dir/XSocket.cpp.o"

# External object files for target net
net_EXTERNAL_OBJECTS =

src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/build.make
src/lib/net/libnet.a: src/lib/net/CMakeFiles/net.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX static library libnet.a"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && $(CMAKE_COMMAND) -P CMakeFiles/net.dir/cmake_clean_target.cmake
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/net.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/net/CMakeFiles/net.dir/build: src/lib/net/libnet.a

.PHONY : src/lib/net/CMakeFiles/net.dir/build

src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/FingerprintData.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/FingerprintDatabase.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/IDataSocket.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/NetworkAddress.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/SecureListenSocket.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/SecureSocket.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/SecureUtils.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/SocketMultiplexer.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/TCPListenSocket.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/TCPSocket.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/TCPSocketFactory.cpp.o.requires
src/lib/net/CMakeFiles/net.dir/requires: src/lib/net/CMakeFiles/net.dir/XSocket.cpp.o.requires

.PHONY : src/lib/net/CMakeFiles/net.dir/requires

src/lib/net/CMakeFiles/net.dir/clean:
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net && $(CMAKE_COMMAND) -P CMakeFiles/net.dir/cmake_clean.cmake
.PHONY : src/lib/net/CMakeFiles/net.dir/clean

src/lib/net/CMakeFiles/net.dir/depend:
	cd /home/nvidia/Desktop/Barrier/barrier/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nvidia/Desktop/Barrier/barrier /home/nvidia/Desktop/Barrier/barrier/src/lib/net /home/nvidia/Desktop/Barrier/barrier/build /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net /home/nvidia/Desktop/Barrier/barrier/build/src/lib/net/CMakeFiles/net.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lib/net/CMakeFiles/net.dir/depend

