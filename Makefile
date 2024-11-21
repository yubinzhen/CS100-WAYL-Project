# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /home/csmajs/wwu160/final-project-wayl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/wwu160/final-project-wayl

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"gmock\" \"gtest\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/wwu160/final-project-wayl/CMakeFiles /home/csmajs/wwu160/final-project-wayl//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/wwu160/final-project-wayl/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named testInventoryAndItems

# Build rule for target.
testInventoryAndItems: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 testInventoryAndItems
.PHONY : testInventoryAndItems

# fast build rule for target.
testInventoryAndItems/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/build
.PHONY : testInventoryAndItems/fast

#=============================================================================
# Target rules for targets named gmock

# Build rule for target.
gmock: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock
.PHONY : gmock

# fast build rule for target.
gmock/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googlemock/CMakeFiles/gmock.dir/build.make googletest/googlemock/CMakeFiles/gmock.dir/build
.PHONY : gmock/fast

#=============================================================================
# Target rules for targets named gmock_main

# Build rule for target.
gmock_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock_main
.PHONY : gmock_main

# fast build rule for target.
gmock_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googlemock/CMakeFiles/gmock_main.dir/build.make googletest/googlemock/CMakeFiles/gmock_main.dir/build
.PHONY : gmock_main/fast

#=============================================================================
# Target rules for targets named gtest

# Build rule for target.
gtest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest
.PHONY : gtest

# fast build rule for target.
gtest/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googletest/CMakeFiles/gtest.dir/build.make googletest/googletest/CMakeFiles/gtest.dir/build
.PHONY : gtest/fast

#=============================================================================
# Target rules for targets named gtest_main

# Build rule for target.
gtest_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest_main
.PHONY : gtest_main

# fast build rule for target.
gtest_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googletest/CMakeFiles/gtest_main.dir/build.make googletest/googletest/CMakeFiles/gtest_main.dir/build
.PHONY : gtest_main/fast

src/Inventory.o: src/Inventory.cpp.o
.PHONY : src/Inventory.o

# target to build an object file
src/Inventory.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Inventory.cpp.o
.PHONY : src/Inventory.cpp.o

src/Inventory.i: src/Inventory.cpp.i
.PHONY : src/Inventory.i

# target to preprocess a source file
src/Inventory.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Inventory.cpp.i
.PHONY : src/Inventory.cpp.i

src/Inventory.s: src/Inventory.cpp.s
.PHONY : src/Inventory.s

# target to generate assembly for a file
src/Inventory.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Inventory.cpp.s
.PHONY : src/Inventory.cpp.s

src/Item.o: src/Item.cpp.o
.PHONY : src/Item.o

# target to build an object file
src/Item.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Item.cpp.o
.PHONY : src/Item.cpp.o

src/Item.i: src/Item.cpp.i
.PHONY : src/Item.i

# target to preprocess a source file
src/Item.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Item.cpp.i
.PHONY : src/Item.cpp.i

src/Item.s: src/Item.cpp.s
.PHONY : src/Item.s

# target to generate assembly for a file
src/Item.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Item.cpp.s
.PHONY : src/Item.cpp.s

src/Pokeballs/GreatBall.o: src/Pokeballs/GreatBall.cpp.o
.PHONY : src/Pokeballs/GreatBall.o

# target to build an object file
src/Pokeballs/GreatBall.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/GreatBall.cpp.o
.PHONY : src/Pokeballs/GreatBall.cpp.o

src/Pokeballs/GreatBall.i: src/Pokeballs/GreatBall.cpp.i
.PHONY : src/Pokeballs/GreatBall.i

# target to preprocess a source file
src/Pokeballs/GreatBall.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/GreatBall.cpp.i
.PHONY : src/Pokeballs/GreatBall.cpp.i

src/Pokeballs/GreatBall.s: src/Pokeballs/GreatBall.cpp.s
.PHONY : src/Pokeballs/GreatBall.s

# target to generate assembly for a file
src/Pokeballs/GreatBall.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/GreatBall.cpp.s
.PHONY : src/Pokeballs/GreatBall.cpp.s

src/Pokeballs/Pokeball.o: src/Pokeballs/Pokeball.cpp.o
.PHONY : src/Pokeballs/Pokeball.o

# target to build an object file
src/Pokeballs/Pokeball.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/Pokeball.cpp.o
.PHONY : src/Pokeballs/Pokeball.cpp.o

src/Pokeballs/Pokeball.i: src/Pokeballs/Pokeball.cpp.i
.PHONY : src/Pokeballs/Pokeball.i

# target to preprocess a source file
src/Pokeballs/Pokeball.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/Pokeball.cpp.i
.PHONY : src/Pokeballs/Pokeball.cpp.i

src/Pokeballs/Pokeball.s: src/Pokeballs/Pokeball.cpp.s
.PHONY : src/Pokeballs/Pokeball.s

# target to generate assembly for a file
src/Pokeballs/Pokeball.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/Pokeball.cpp.s
.PHONY : src/Pokeballs/Pokeball.cpp.s

src/Pokeballs/StandardBall.o: src/Pokeballs/StandardBall.cpp.o
.PHONY : src/Pokeballs/StandardBall.o

# target to build an object file
src/Pokeballs/StandardBall.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/StandardBall.cpp.o
.PHONY : src/Pokeballs/StandardBall.cpp.o

src/Pokeballs/StandardBall.i: src/Pokeballs/StandardBall.cpp.i
.PHONY : src/Pokeballs/StandardBall.i

# target to preprocess a source file
src/Pokeballs/StandardBall.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/StandardBall.cpp.i
.PHONY : src/Pokeballs/StandardBall.cpp.i

src/Pokeballs/StandardBall.s: src/Pokeballs/StandardBall.cpp.s
.PHONY : src/Pokeballs/StandardBall.s

# target to generate assembly for a file
src/Pokeballs/StandardBall.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/StandardBall.cpp.s
.PHONY : src/Pokeballs/StandardBall.cpp.s

src/Pokeballs/UltraBall.o: src/Pokeballs/UltraBall.cpp.o
.PHONY : src/Pokeballs/UltraBall.o

# target to build an object file
src/Pokeballs/UltraBall.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/UltraBall.cpp.o
.PHONY : src/Pokeballs/UltraBall.cpp.o

src/Pokeballs/UltraBall.i: src/Pokeballs/UltraBall.cpp.i
.PHONY : src/Pokeballs/UltraBall.i

# target to preprocess a source file
src/Pokeballs/UltraBall.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/UltraBall.cpp.i
.PHONY : src/Pokeballs/UltraBall.cpp.i

src/Pokeballs/UltraBall.s: src/Pokeballs/UltraBall.cpp.s
.PHONY : src/Pokeballs/UltraBall.s

# target to generate assembly for a file
src/Pokeballs/UltraBall.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Pokeballs/UltraBall.cpp.s
.PHONY : src/Pokeballs/UltraBall.cpp.s

src/Potions/HyperPotion.o: src/Potions/HyperPotion.cpp.o
.PHONY : src/Potions/HyperPotion.o

# target to build an object file
src/Potions/HyperPotion.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/HyperPotion.cpp.o
.PHONY : src/Potions/HyperPotion.cpp.o

src/Potions/HyperPotion.i: src/Potions/HyperPotion.cpp.i
.PHONY : src/Potions/HyperPotion.i

# target to preprocess a source file
src/Potions/HyperPotion.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/HyperPotion.cpp.i
.PHONY : src/Potions/HyperPotion.cpp.i

src/Potions/HyperPotion.s: src/Potions/HyperPotion.cpp.s
.PHONY : src/Potions/HyperPotion.s

# target to generate assembly for a file
src/Potions/HyperPotion.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/HyperPotion.cpp.s
.PHONY : src/Potions/HyperPotion.cpp.s

src/Potions/Potion.o: src/Potions/Potion.cpp.o
.PHONY : src/Potions/Potion.o

# target to build an object file
src/Potions/Potion.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/Potion.cpp.o
.PHONY : src/Potions/Potion.cpp.o

src/Potions/Potion.i: src/Potions/Potion.cpp.i
.PHONY : src/Potions/Potion.i

# target to preprocess a source file
src/Potions/Potion.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/Potion.cpp.i
.PHONY : src/Potions/Potion.cpp.i

src/Potions/Potion.s: src/Potions/Potion.cpp.s
.PHONY : src/Potions/Potion.s

# target to generate assembly for a file
src/Potions/Potion.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/Potion.cpp.s
.PHONY : src/Potions/Potion.cpp.s

src/Potions/StandardPotion.o: src/Potions/StandardPotion.cpp.o
.PHONY : src/Potions/StandardPotion.o

# target to build an object file
src/Potions/StandardPotion.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/StandardPotion.cpp.o
.PHONY : src/Potions/StandardPotion.cpp.o

src/Potions/StandardPotion.i: src/Potions/StandardPotion.cpp.i
.PHONY : src/Potions/StandardPotion.i

# target to preprocess a source file
src/Potions/StandardPotion.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/StandardPotion.cpp.i
.PHONY : src/Potions/StandardPotion.cpp.i

src/Potions/StandardPotion.s: src/Potions/StandardPotion.cpp.s
.PHONY : src/Potions/StandardPotion.s

# target to generate assembly for a file
src/Potions/StandardPotion.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/StandardPotion.cpp.s
.PHONY : src/Potions/StandardPotion.cpp.s

src/Potions/SuperPotion.o: src/Potions/SuperPotion.cpp.o
.PHONY : src/Potions/SuperPotion.o

# target to build an object file
src/Potions/SuperPotion.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/SuperPotion.cpp.o
.PHONY : src/Potions/SuperPotion.cpp.o

src/Potions/SuperPotion.i: src/Potions/SuperPotion.cpp.i
.PHONY : src/Potions/SuperPotion.i

# target to preprocess a source file
src/Potions/SuperPotion.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/SuperPotion.cpp.i
.PHONY : src/Potions/SuperPotion.cpp.i

src/Potions/SuperPotion.s: src/Potions/SuperPotion.cpp.s
.PHONY : src/Potions/SuperPotion.s

# target to generate assembly for a file
src/Potions/SuperPotion.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Potions/SuperPotion.cpp.s
.PHONY : src/Potions/SuperPotion.cpp.s

src/Revives/MaxRevive.o: src/Revives/MaxRevive.cpp.o
.PHONY : src/Revives/MaxRevive.o

# target to build an object file
src/Revives/MaxRevive.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/MaxRevive.cpp.o
.PHONY : src/Revives/MaxRevive.cpp.o

src/Revives/MaxRevive.i: src/Revives/MaxRevive.cpp.i
.PHONY : src/Revives/MaxRevive.i

# target to preprocess a source file
src/Revives/MaxRevive.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/MaxRevive.cpp.i
.PHONY : src/Revives/MaxRevive.cpp.i

src/Revives/MaxRevive.s: src/Revives/MaxRevive.cpp.s
.PHONY : src/Revives/MaxRevive.s

# target to generate assembly for a file
src/Revives/MaxRevive.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/MaxRevive.cpp.s
.PHONY : src/Revives/MaxRevive.cpp.s

src/Revives/Revive.o: src/Revives/Revive.cpp.o
.PHONY : src/Revives/Revive.o

# target to build an object file
src/Revives/Revive.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/Revive.cpp.o
.PHONY : src/Revives/Revive.cpp.o

src/Revives/Revive.i: src/Revives/Revive.cpp.i
.PHONY : src/Revives/Revive.i

# target to preprocess a source file
src/Revives/Revive.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/Revive.cpp.i
.PHONY : src/Revives/Revive.cpp.i

src/Revives/Revive.s: src/Revives/Revive.cpp.s
.PHONY : src/Revives/Revive.s

# target to generate assembly for a file
src/Revives/Revive.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/Revive.cpp.s
.PHONY : src/Revives/Revive.cpp.s

src/Revives/StandardRevive.o: src/Revives/StandardRevive.cpp.o
.PHONY : src/Revives/StandardRevive.o

# target to build an object file
src/Revives/StandardRevive.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/StandardRevive.cpp.o
.PHONY : src/Revives/StandardRevive.cpp.o

src/Revives/StandardRevive.i: src/Revives/StandardRevive.cpp.i
.PHONY : src/Revives/StandardRevive.i

# target to preprocess a source file
src/Revives/StandardRevive.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/StandardRevive.cpp.i
.PHONY : src/Revives/StandardRevive.cpp.i

src/Revives/StandardRevive.s: src/Revives/StandardRevive.cpp.s
.PHONY : src/Revives/StandardRevive.s

# target to generate assembly for a file
src/Revives/StandardRevive.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/src/Revives/StandardRevive.cpp.s
.PHONY : src/Revives/StandardRevive.cpp.s

tests/test.o: tests/test.cpp.o
.PHONY : tests/test.o

# target to build an object file
tests/test.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/tests/test.cpp.o
.PHONY : tests/test.cpp.o

tests/test.i: tests/test.cpp.i
.PHONY : tests/test.i

# target to preprocess a source file
tests/test.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/tests/test.cpp.i
.PHONY : tests/test.cpp.i

tests/test.s: tests/test.cpp.s
.PHONY : tests/test.s

# target to generate assembly for a file
tests/test.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/testInventoryAndItems.dir/build.make CMakeFiles/testInventoryAndItems.dir/tests/test.cpp.s
.PHONY : tests/test.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... gmock"
	@echo "... gmock_main"
	@echo "... gtest"
	@echo "... gtest_main"
	@echo "... testInventoryAndItems"
	@echo "... src/Inventory.o"
	@echo "... src/Inventory.i"
	@echo "... src/Inventory.s"
	@echo "... src/Item.o"
	@echo "... src/Item.i"
	@echo "... src/Item.s"
	@echo "... src/Pokeballs/GreatBall.o"
	@echo "... src/Pokeballs/GreatBall.i"
	@echo "... src/Pokeballs/GreatBall.s"
	@echo "... src/Pokeballs/Pokeball.o"
	@echo "... src/Pokeballs/Pokeball.i"
	@echo "... src/Pokeballs/Pokeball.s"
	@echo "... src/Pokeballs/StandardBall.o"
	@echo "... src/Pokeballs/StandardBall.i"
	@echo "... src/Pokeballs/StandardBall.s"
	@echo "... src/Pokeballs/UltraBall.o"
	@echo "... src/Pokeballs/UltraBall.i"
	@echo "... src/Pokeballs/UltraBall.s"
	@echo "... src/Potions/HyperPotion.o"
	@echo "... src/Potions/HyperPotion.i"
	@echo "... src/Potions/HyperPotion.s"
	@echo "... src/Potions/Potion.o"
	@echo "... src/Potions/Potion.i"
	@echo "... src/Potions/Potion.s"
	@echo "... src/Potions/StandardPotion.o"
	@echo "... src/Potions/StandardPotion.i"
	@echo "... src/Potions/StandardPotion.s"
	@echo "... src/Potions/SuperPotion.o"
	@echo "... src/Potions/SuperPotion.i"
	@echo "... src/Potions/SuperPotion.s"
	@echo "... src/Revives/MaxRevive.o"
	@echo "... src/Revives/MaxRevive.i"
	@echo "... src/Revives/MaxRevive.s"
	@echo "... src/Revives/Revive.o"
	@echo "... src/Revives/Revive.i"
	@echo "... src/Revives/Revive.s"
	@echo "... src/Revives/StandardRevive.o"
	@echo "... src/Revives/StandardRevive.i"
	@echo "... src/Revives/StandardRevive.s"
	@echo "... tests/test.o"
	@echo "... tests/test.i"
	@echo "... tests/test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

