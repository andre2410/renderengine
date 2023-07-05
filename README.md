# renderengine
Simple render engine


## About
Skeleton render engine can load objects (obj) files and display them in a window. It can also apply the sobel effect to the objects.

It was an assignment for my graphics paper for Otago University.
Most of the files were provided by our lecturer Stefanie Zollman, I edited a few specific files to improve the render engine

## Instructions
To run the program, please use your favourite IDE that supports C++ and ensure you have a compiler installed (e.g GNU).
Also ensure that the object files you want to use is in the skeleton folder.

The program can also be run from the terminal window. Please set the directory where the folder containing both the common and skeleton folder is by using the cd command, followed by the arguments you wish to include.
E.g: ./build/Skeleton person.obj Ant_Mesh.obj

The arguments are the names of the obj files of the objects you want to load into the program
 
 For changing arguments, type the arguments in an args array in the .json file for launch options, args array should be in the format below:
 e.g 
"args": ["person.obj", "earthobj.obj", "Ant_Mesh.obj"],
 
 Depending on the OS, the args array needs to be placed in a different .json file, examples below:
 - Windows:./Local settings (.vs)/ <filename>/launch.vs.json where <foldername> is the folder that stereo.cpp is contained in. It needs to be placed first in configurations before "type"
 - Mac: ./vscode/launch.json. If you are using Visual Studio Code to run C++.

If you are using cmake, please change the set(CMAKE_TOOLCHAIN_FILE "<YOUR DIRECTORY>\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake") to the appropriate directory that your cmake file is.
Replace the <YOUR DIRECTORY> with your directory

Program interaction:
Once the program runs, you can see it will print linking and compiling shaders to stdout. Once the blue window appears, you can look around using mouse movements and move around using
arrow keys. 
You can change the render mode by pressing 1 for normal mode (Phong shading and Blinn-Phong reflection) or 2 for sobel effect.
