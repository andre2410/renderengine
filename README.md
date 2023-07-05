# renderengine
Simple render engine that uses OpenGL and CMAKE.

Author: Andrew Goh

## About
Simple render engine aka Skeleton render engine can load objects (obj) files and display them in a window. It can also apply the sobel effect to the objects.

It applies Phong shading and the Blinn-Phong reflection model to each model. It also supports the object's transparency 

It was an assignment for my graphics paper for Otago University.
Most of the files were provided by our lecturer Stefanie Zollman, I edited a few specific files to improve the render engine. If you wish you can check the comments in the files in the "common" and "Skeleton" folders.

## Instructions
To run the program, please use your favourite IDE that supports C++ and ensure you have a compiler installed (e.g GNU).
Also ensure that the object files you want to use is in the skeleton folder.

The program can also be run from the terminal window. Please set the directory where the folder containing both the common and skeleton folder is by using the cd command, followed by the arguments you wish to include.
E.g: ./build/Skeleton person.obj Ant_Mesh.obj

### IMPORTANT
If you are using Visual Studio or Visual Studio Code. Please follow these instructions.
Please take the files from the "extras" folder and rename it to .vs. This would override the existing file in the .vs hidden folder when CMAKE is generating. (This is a better approach than directly replacing the files
in the .vs folder itself)

## Changing arguments of launch.vs.json/launch.json
The arguments are the names of the obj files of the objects you want to load into the program

 For changing arguments, type the arguments in an args array in the .json file for launch options, args array should be in the format below:
 e.g 
"args": ["person.obj", "earthobj.obj", "Ant_Mesh.obj"],
 
 Depending on the OS, the args array needs to be placed in a different .json file, examples below:
 - Windows:./Local settings (.vs)/ FOLDERNAME/launch.vs.json where FOLDERNAME is the folder that stereo.cpp is contained in. It needs to be placed first in configurations before "type"
 - Mac: ./vscode/launch.json. If you are using Visual Studio Code to run C++.

If you are using cmake, please change the set(CMAKE_TOOLCHAIN_FILE "YOURDIRECTORY\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake") to the appropriate directory that your cmake file is.
Replace the YOURDIRECTORY with your directory

## Program interaction
Once the program runs, you can see it will print linking and compiling shaders to stdout. Once the blue window appears, you can look around using mouse movements and move around using
arrow keys. 
You can change the render mode by pressing 1 for normal mode (Phong shading and Blinn-Phong reflection) or 2 for sobel effect.

Right now, the background is a plain blue background. The main focus of the render engine is to see the effects of the Phong Shading and Blinn-Phong reflection model in addition to the sobel effect.
