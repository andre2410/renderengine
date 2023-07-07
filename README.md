# renderengine
Simple render engine that uses OpenGL and CMAKE.

Author: Andrew Goh

## About
Simple render engine aka Skeleton render engine can load objects (obj) files and display them in a window. It can also apply the sobel effect to the objects.

It applies Phong shading and the Blinn-Phong reflection model to each model. It also supports the object's transparency 

Normal mode of render engine:

![RE image](https://i.imgur.com/K9ib0X3.jpg)

Sobel effect of render engine:

![RE sobel image](https://i.imgur.com/rL3clSP.jpg)

It was an assignment for my graphics paper for Otago University.
Most of the files were provided by our lecturer Stefanie Zollman who only provided the general loading of models but has no support for lighting or transparency and effects. I implemented the lighting and transparency support, in addition to the Sobel effect.
If you wish you can check the code specifics in the files in the "common" and "Skeleton" folders.

## Instructions
To run the program, please use your favourite IDE that supports C++ and ensure you have a compiler installed (e.g GNU).
Ensure that you have the OpenGL library installed.
Also, ensure that the object files you want to use are in the skeleton folder.

Select Skeleton.exe in your IDE and run it. A terminal and blue window will appear when it is running successfully.

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
 - Windows:./Local settings (.vs)/ FOLDERNAME/launch.vs.json where FOLDERNAME is the folder that Skeleton.exe is contained in. It needs to be placed first in configurations before "type"
 - Mac: ./vscode/launch.json. If you are using Visual Studio Code to run C++.

If you are using CMake, please change the set(CMAKE_TOOLCHAIN_FILE "YOURDIRECTORY\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake") to the appropriate directory that your cmake file is.
Replace the YOURDIRECTORY with your directory

## Program interaction
Once the program runs, you can see it will print linking and compiling shaders to stdout. Once the blue window appears, the object models will be loaded into the window. 
You can look around using mouse movements and move around using arrow keys. 
You can change the render mode by pressing 1 for normal mode (Phong shading and Blinn-Phong reflection) or 2 for sobel effect.

Right now, the background is a plain blue background. The main focus of the render engine is to see the effects of the Phong Shading and Blinn-Phong reflection model in addition to the sobel effect.


## Limitations
As this render engine is a simple render engine, it has 2 limitations.

Firstly, the object models to be loaded must be a pure triangle mesh. If not, the model will be loaded incorrectly.

To convert an object model to a pure triangle mesh, the steps below can be used.

1. Download [Meshlab](https://www.meshlab.net/)
2. Load your object model into Meshlab
3. Go to filters -> remeshing ... reconstruction -> turn into pure triangle mesh
4. Download the new mtl file and obj file, use the new obj file for the simple render engine by placing it in the Skeleton folder.

Secondly, the render engine can only accept bmp files for textures. The BMP file has to be in a 24bpp format.

Unfortunately, that is the case as the file /common/Texture.cpp responsible for loading textures onto the models is set to it for simple functionality.

You can convert the texture image to a BMP file in 24bpp using [this](https://online-converting.com/image/convert2bmp/)
