# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TrabalhoFinalAOC2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TrabalhoFinalAOC2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TrabalhoFinalAOC2.dir/flags.make

CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\main.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\main.c

CMakeFiles/TrabalhoFinalAOC2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/main.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\main.c > CMakeFiles\TrabalhoFinalAOC2.dir\main.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/main.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\main.c -o CMakeFiles\TrabalhoFinalAOC2.dir\main.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj: ../modA.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\modA.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modA.c

CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modA.c > CMakeFiles\TrabalhoFinalAOC2.dir\modA.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modA.c -o CMakeFiles\TrabalhoFinalAOC2.dir\modA.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj: ../modB.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\modB.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modB.c

CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modB.c > CMakeFiles\TrabalhoFinalAOC2.dir\modB.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modB.c -o CMakeFiles\TrabalhoFinalAOC2.dir\modB.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj: ../modC.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\modC.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modC.c

CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modC.c > CMakeFiles\TrabalhoFinalAOC2.dir\modC.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modC.c -o CMakeFiles\TrabalhoFinalAOC2.dir\modC.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj: ../modD.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\modD.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modD.c

CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modD.c > CMakeFiles\TrabalhoFinalAOC2.dir\modD.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modD.c -o CMakeFiles\TrabalhoFinalAOC2.dir\modD.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj: ../modE.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\modE.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modE.c

CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modE.c > CMakeFiles\TrabalhoFinalAOC2.dir\modE.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modE.c -o CMakeFiles\TrabalhoFinalAOC2.dir\modE.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj: ../modF.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\modF.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modF.c

CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modF.c > CMakeFiles\TrabalhoFinalAOC2.dir\modF.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modF.c -o CMakeFiles\TrabalhoFinalAOC2.dir\modF.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj: ../modG.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\modG.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modG.c

CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modG.c > CMakeFiles\TrabalhoFinalAOC2.dir\modG.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\modG.c -o CMakeFiles\TrabalhoFinalAOC2.dir\modG.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj


CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj: CMakeFiles/TrabalhoFinalAOC2.dir/flags.make
CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj: ../fila.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TrabalhoFinalAOC2.dir\fila.c.obj   -c C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\fila.c

CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.i"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\fila.c > CMakeFiles\TrabalhoFinalAOC2.dir\fila.c.i

CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.s"
	C:\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\fila.c -o CMakeFiles\TrabalhoFinalAOC2.dir\fila.c.s

CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.requires:

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.requires

CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.provides: CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.requires
	$(MAKE) -f CMakeFiles\TrabalhoFinalAOC2.dir\build.make CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.provides.build
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.provides

CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.provides.build: CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj


# Object files for target TrabalhoFinalAOC2
TrabalhoFinalAOC2_OBJECTS = \
"CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj" \
"CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj"

# External object files for target TrabalhoFinalAOC2
TrabalhoFinalAOC2_EXTERNAL_OBJECTS =

TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/build.make
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/linklibs.rsp
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/objects1.rsp
TrabalhoFinalAOC2.exe: CMakeFiles/TrabalhoFinalAOC2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable TrabalhoFinalAOC2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TrabalhoFinalAOC2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TrabalhoFinalAOC2.dir/build: TrabalhoFinalAOC2.exe

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/build

CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/main.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/modA.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/modB.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/modC.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/modD.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/modE.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/modF.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/modG.c.obj.requires
CMakeFiles/TrabalhoFinalAOC2.dir/requires: CMakeFiles/TrabalhoFinalAOC2.dir/fila.c.obj.requires

.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/requires

CMakeFiles/TrabalhoFinalAOC2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TrabalhoFinalAOC2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/clean

CMakeFiles/TrabalhoFinalAOC2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2 C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2 C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug C:\Users\gomes\CLionProjects\TrabalhoFinalAOC2\cmake-build-debug\CMakeFiles\TrabalhoFinalAOC2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TrabalhoFinalAOC2.dir/depend
