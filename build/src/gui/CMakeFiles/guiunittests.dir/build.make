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
include src/gui/CMakeFiles/guiunittests.dir/depend.make

# Include the progress variables for this target.
include src/gui/CMakeFiles/guiunittests.dir/progress.make

# Include the compile flags for this target's objects.
include src/gui/CMakeFiles/guiunittests.dir/flags.make

src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o: src/gui/CMakeFiles/guiunittests.dir/flags.make
src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o: ../src/gui/test/KeySequenceTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/gui/test/KeySequenceTests.cpp

src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/gui/test/KeySequenceTests.cpp > CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.i

src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/gui/test/KeySequenceTests.cpp -o CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.s

src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.requires:

.PHONY : src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.requires

src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.provides: src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.requires
	$(MAKE) -f src/gui/CMakeFiles/guiunittests.dir/build.make src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.provides.build
.PHONY : src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.provides

src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.provides.build: src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o


src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o: src/gui/CMakeFiles/guiunittests.dir/flags.make
src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o: ../src/gui/test/HotkeyTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/gui/test/HotkeyTests.cpp

src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/gui/test/HotkeyTests.cpp > CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.i

src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/gui/test/HotkeyTests.cpp -o CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.s

src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.requires:

.PHONY : src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.requires

src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.provides: src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.requires
	$(MAKE) -f src/gui/CMakeFiles/guiunittests.dir/build.make src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.provides.build
.PHONY : src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.provides

src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.provides.build: src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o


src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o: src/gui/CMakeFiles/guiunittests.dir/flags.make
src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o: ../src/gui/test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guiunittests.dir/test/main.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/gui/test/main.cpp

src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guiunittests.dir/test/main.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/gui/test/main.cpp > CMakeFiles/guiunittests.dir/test/main.cpp.i

src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guiunittests.dir/test/main.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/gui/test/main.cpp -o CMakeFiles/guiunittests.dir/test/main.cpp.s

src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.requires:

.PHONY : src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.requires

src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.provides: src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.requires
	$(MAKE) -f src/gui/CMakeFiles/guiunittests.dir/build.make src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.provides.build
.PHONY : src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.provides

src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.provides.build: src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o


src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o: src/gui/CMakeFiles/guiunittests.dir/flags.make
src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o: ../src/gui/src/Action.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guiunittests.dir/src/Action.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/gui/src/Action.cpp

src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guiunittests.dir/src/Action.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/gui/src/Action.cpp > CMakeFiles/guiunittests.dir/src/Action.cpp.i

src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guiunittests.dir/src/Action.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/gui/src/Action.cpp -o CMakeFiles/guiunittests.dir/src/Action.cpp.s

src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.requires:

.PHONY : src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.requires

src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.provides: src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.requires
	$(MAKE) -f src/gui/CMakeFiles/guiunittests.dir/build.make src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.provides.build
.PHONY : src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.provides

src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.provides.build: src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o


src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o: src/gui/CMakeFiles/guiunittests.dir/flags.make
src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o: ../src/gui/src/Hotkey.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/gui/src/Hotkey.cpp

src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guiunittests.dir/src/Hotkey.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/gui/src/Hotkey.cpp > CMakeFiles/guiunittests.dir/src/Hotkey.cpp.i

src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guiunittests.dir/src/Hotkey.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/gui/src/Hotkey.cpp -o CMakeFiles/guiunittests.dir/src/Hotkey.cpp.s

src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.requires:

.PHONY : src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.requires

src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.provides: src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.requires
	$(MAKE) -f src/gui/CMakeFiles/guiunittests.dir/build.make src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.provides.build
.PHONY : src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.provides

src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.provides.build: src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o


src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o: src/gui/CMakeFiles/guiunittests.dir/flags.make
src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o: ../src/gui/src/KeySequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/src/gui/src/KeySequence.cpp

src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guiunittests.dir/src/KeySequence.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/src/gui/src/KeySequence.cpp > CMakeFiles/guiunittests.dir/src/KeySequence.cpp.i

src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guiunittests.dir/src/KeySequence.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/src/gui/src/KeySequence.cpp -o CMakeFiles/guiunittests.dir/src/KeySequence.cpp.s

src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.requires:

.PHONY : src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.requires

src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.provides: src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.requires
	$(MAKE) -f src/gui/CMakeFiles/guiunittests.dir/build.make src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.provides.build
.PHONY : src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.provides

src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.provides.build: src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o


src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o: src/gui/CMakeFiles/guiunittests.dir/flags.make
src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o: src/gui/guiunittests_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o -c /home/nvidia/Desktop/Barrier/barrier/build/src/gui/guiunittests_autogen/mocs_compilation.cpp

src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.i"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/Desktop/Barrier/barrier/build/src/gui/guiunittests_autogen/mocs_compilation.cpp > CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.i

src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.s"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/Desktop/Barrier/barrier/build/src/gui/guiunittests_autogen/mocs_compilation.cpp -o CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.s

src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.requires:

.PHONY : src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.requires

src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.provides: src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f src/gui/CMakeFiles/guiunittests.dir/build.make src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.provides

src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.provides.build: src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o


# Object files for target guiunittests
guiunittests_OBJECTS = \
"CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o" \
"CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o" \
"CMakeFiles/guiunittests.dir/test/main.cpp.o" \
"CMakeFiles/guiunittests.dir/src/Action.cpp.o" \
"CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o" \
"CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o" \
"CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o"

# External object files for target guiunittests
guiunittests_EXTERNAL_OBJECTS =

bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/build.make
bin/guiunittests: src/libgtest.a
bin/guiunittests: src/libgmock.a
bin/guiunittests: /usr/lib/aarch64-linux-gnu/libQt5Widgets.so.5.9.5
bin/guiunittests: /usr/lib/aarch64-linux-gnu/libQt5Network.so.5.9.5
bin/guiunittests: /usr/lib/aarch64-linux-gnu/libcurl.so
bin/guiunittests: /usr/lib/aarch64-linux-gnu/libQt5Gui.so.5.9.5
bin/guiunittests: /usr/lib/aarch64-linux-gnu/libQt5Core.so.5.9.5
bin/guiunittests: src/gui/CMakeFiles/guiunittests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nvidia/Desktop/Barrier/barrier/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ../../bin/guiunittests"
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/guiunittests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/gui/CMakeFiles/guiunittests.dir/build: bin/guiunittests

.PHONY : src/gui/CMakeFiles/guiunittests.dir/build

src/gui/CMakeFiles/guiunittests.dir/requires: src/gui/CMakeFiles/guiunittests.dir/test/KeySequenceTests.cpp.o.requires
src/gui/CMakeFiles/guiunittests.dir/requires: src/gui/CMakeFiles/guiunittests.dir/test/HotkeyTests.cpp.o.requires
src/gui/CMakeFiles/guiunittests.dir/requires: src/gui/CMakeFiles/guiunittests.dir/test/main.cpp.o.requires
src/gui/CMakeFiles/guiunittests.dir/requires: src/gui/CMakeFiles/guiunittests.dir/src/Action.cpp.o.requires
src/gui/CMakeFiles/guiunittests.dir/requires: src/gui/CMakeFiles/guiunittests.dir/src/Hotkey.cpp.o.requires
src/gui/CMakeFiles/guiunittests.dir/requires: src/gui/CMakeFiles/guiunittests.dir/src/KeySequence.cpp.o.requires
src/gui/CMakeFiles/guiunittests.dir/requires: src/gui/CMakeFiles/guiunittests.dir/guiunittests_autogen/mocs_compilation.cpp.o.requires

.PHONY : src/gui/CMakeFiles/guiunittests.dir/requires

src/gui/CMakeFiles/guiunittests.dir/clean:
	cd /home/nvidia/Desktop/Barrier/barrier/build/src/gui && $(CMAKE_COMMAND) -P CMakeFiles/guiunittests.dir/cmake_clean.cmake
.PHONY : src/gui/CMakeFiles/guiunittests.dir/clean

src/gui/CMakeFiles/guiunittests.dir/depend:
	cd /home/nvidia/Desktop/Barrier/barrier/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nvidia/Desktop/Barrier/barrier /home/nvidia/Desktop/Barrier/barrier/src/gui /home/nvidia/Desktop/Barrier/barrier/build /home/nvidia/Desktop/Barrier/barrier/build/src/gui /home/nvidia/Desktop/Barrier/barrier/build/src/gui/CMakeFiles/guiunittests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/gui/CMakeFiles/guiunittests.dir/depend

