# sfml_cmake_skeleton
Skeleton project folder for building SFML-project with CMake


# How to build?

#### You need CMake. Install it for command line atleast. If you are not sure if you have it: `cmake --version`
#### After installing CMake  follow steps 1-7
1. Clone project or download Zip-file and unzip it
2. Open terminal inside of the project
3. `mkdir build` -  to make "build" directory inside of project folder
4. `cd ./build` - go inside of "build" folder
5. `cmake ..` - to link files (On windows use command `cmake .. -G "MinGW Makefiles` if you followed windows prerequisites guide)
6. `make` - to build project (On windows use command `mingw32-make.exe` if you followed windows prerequisites guide)
7. `./a` - to display output


# How to use?
#### If you are new to CMake don't worry so am I. I made this for myself so it will be easy to copy this for new project and be ready to go without additional hassle.
- In project folder you will find "CMakeLists.txt". Don't rename it and don't move it if you don't know what you are doing.
- Add your ".cpp"-files here: `set(SOURCES src/main.cpp 'here')`. Don't forget "`src/`".
- Create your header files (".h/.hpp")-files inside of src folder. If you want to put them into different folder just modify this line: `include_directories(your_include_folder_name)`
- If your project uses additional files like images or fonts keep them in "res" folder. and add this line for each additional file `configure_file(res/filename.extension filename.extension COPYONLY)`
- 
