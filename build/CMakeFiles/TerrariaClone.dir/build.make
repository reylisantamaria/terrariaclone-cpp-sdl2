# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/reylisantamaria/Documents/GitHub/TerrariaClone

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/reylisantamaria/Documents/GitHub/TerrariaClone/build

# Include any dependencies generated for this target.
include CMakeFiles/TerrariaClone.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TerrariaClone.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TerrariaClone.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TerrariaClone.dir/flags.make

CMakeFiles/TerrariaClone.dir/codegen:
.PHONY : CMakeFiles/TerrariaClone.dir/codegen

CMakeFiles/TerrariaClone.dir/src/Game.cpp.o: CMakeFiles/TerrariaClone.dir/flags.make
CMakeFiles/TerrariaClone.dir/src/Game.cpp.o: /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Game.cpp
CMakeFiles/TerrariaClone.dir/src/Game.cpp.o: CMakeFiles/TerrariaClone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TerrariaClone.dir/src/Game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TerrariaClone.dir/src/Game.cpp.o -MF CMakeFiles/TerrariaClone.dir/src/Game.cpp.o.d -o CMakeFiles/TerrariaClone.dir/src/Game.cpp.o -c /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Game.cpp

CMakeFiles/TerrariaClone.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TerrariaClone.dir/src/Game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Game.cpp > CMakeFiles/TerrariaClone.dir/src/Game.cpp.i

CMakeFiles/TerrariaClone.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TerrariaClone.dir/src/Game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Game.cpp -o CMakeFiles/TerrariaClone.dir/src/Game.cpp.s

CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o: CMakeFiles/TerrariaClone.dir/flags.make
CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o: /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/GameObject.cpp
CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o: CMakeFiles/TerrariaClone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o -MF CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o.d -o CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o -c /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/GameObject.cpp

CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/GameObject.cpp > CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.i

CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/GameObject.cpp -o CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.s

CMakeFiles/TerrariaClone.dir/src/Player.cpp.o: CMakeFiles/TerrariaClone.dir/flags.make
CMakeFiles/TerrariaClone.dir/src/Player.cpp.o: /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Player.cpp
CMakeFiles/TerrariaClone.dir/src/Player.cpp.o: CMakeFiles/TerrariaClone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TerrariaClone.dir/src/Player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TerrariaClone.dir/src/Player.cpp.o -MF CMakeFiles/TerrariaClone.dir/src/Player.cpp.o.d -o CMakeFiles/TerrariaClone.dir/src/Player.cpp.o -c /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Player.cpp

CMakeFiles/TerrariaClone.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TerrariaClone.dir/src/Player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Player.cpp > CMakeFiles/TerrariaClone.dir/src/Player.cpp.i

CMakeFiles/TerrariaClone.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TerrariaClone.dir/src/Player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Player.cpp -o CMakeFiles/TerrariaClone.dir/src/Player.cpp.s

CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o: CMakeFiles/TerrariaClone.dir/flags.make
CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o: /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/TextureManager.cpp
CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o: CMakeFiles/TerrariaClone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o -MF CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o.d -o CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o -c /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/TextureManager.cpp

CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/TextureManager.cpp > CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.i

CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/TextureManager.cpp -o CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.s

CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o: CMakeFiles/TerrariaClone.dir/flags.make
CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o: /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Timer.cpp
CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o: CMakeFiles/TerrariaClone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o -MF CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o.d -o CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o -c /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Timer.cpp

CMakeFiles/TerrariaClone.dir/src/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TerrariaClone.dir/src/Timer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Timer.cpp > CMakeFiles/TerrariaClone.dir/src/Timer.cpp.i

CMakeFiles/TerrariaClone.dir/src/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TerrariaClone.dir/src/Timer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/Timer.cpp -o CMakeFiles/TerrariaClone.dir/src/Timer.cpp.s

CMakeFiles/TerrariaClone.dir/src/main.cpp.o: CMakeFiles/TerrariaClone.dir/flags.make
CMakeFiles/TerrariaClone.dir/src/main.cpp.o: /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/main.cpp
CMakeFiles/TerrariaClone.dir/src/main.cpp.o: CMakeFiles/TerrariaClone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/TerrariaClone.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TerrariaClone.dir/src/main.cpp.o -MF CMakeFiles/TerrariaClone.dir/src/main.cpp.o.d -o CMakeFiles/TerrariaClone.dir/src/main.cpp.o -c /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/main.cpp

CMakeFiles/TerrariaClone.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TerrariaClone.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/main.cpp > CMakeFiles/TerrariaClone.dir/src/main.cpp.i

CMakeFiles/TerrariaClone.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TerrariaClone.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/reylisantamaria/Documents/GitHub/TerrariaClone/src/main.cpp -o CMakeFiles/TerrariaClone.dir/src/main.cpp.s

# Object files for target TerrariaClone
TerrariaClone_OBJECTS = \
"CMakeFiles/TerrariaClone.dir/src/Game.cpp.o" \
"CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o" \
"CMakeFiles/TerrariaClone.dir/src/Player.cpp.o" \
"CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o" \
"CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o" \
"CMakeFiles/TerrariaClone.dir/src/main.cpp.o"

# External object files for target TerrariaClone
TerrariaClone_EXTERNAL_OBJECTS =

TerrariaClone: CMakeFiles/TerrariaClone.dir/src/Game.cpp.o
TerrariaClone: CMakeFiles/TerrariaClone.dir/src/GameObject.cpp.o
TerrariaClone: CMakeFiles/TerrariaClone.dir/src/Player.cpp.o
TerrariaClone: CMakeFiles/TerrariaClone.dir/src/TextureManager.cpp.o
TerrariaClone: CMakeFiles/TerrariaClone.dir/src/Timer.cpp.o
TerrariaClone: CMakeFiles/TerrariaClone.dir/src/main.cpp.o
TerrariaClone: CMakeFiles/TerrariaClone.dir/build.make
TerrariaClone: CMakeFiles/TerrariaClone.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable TerrariaClone"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TerrariaClone.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TerrariaClone.dir/build: TerrariaClone
.PHONY : CMakeFiles/TerrariaClone.dir/build

CMakeFiles/TerrariaClone.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TerrariaClone.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TerrariaClone.dir/clean

CMakeFiles/TerrariaClone.dir/depend:
	cd /Users/reylisantamaria/Documents/GitHub/TerrariaClone/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/reylisantamaria/Documents/GitHub/TerrariaClone /Users/reylisantamaria/Documents/GitHub/TerrariaClone /Users/reylisantamaria/Documents/GitHub/TerrariaClone/build /Users/reylisantamaria/Documents/GitHub/TerrariaClone/build /Users/reylisantamaria/Documents/GitHub/TerrariaClone/build/CMakeFiles/TerrariaClone.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TerrariaClone.dir/depend

