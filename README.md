<h1 align="center">cppturtle</h1>
<p align="center">

<img alt="GitHub Workflow Status" align="center" src="https://img.shields.io/github/actions/workflow/status/davidfiliks/cppturtle/cmake-multi-platform.yml">
<img alt="GitHub Project Licence" align="center" src="https://img.shields.io/github/license/davidfiliks/cppturtle">
</p>
<br><br>

This library is an implementation of the [Python turtle library](https://docs.python.org/3/library/turtle.html) in C++ using [SDL2](https://github.com/libsdl-org/SDL/tree/SDL2). I created this library so that people of all programming skill levels can create cool-looking graphics!

This library is great because:
- Is very easy to use
- Perfect for beginners to learn C++ syntax
- Is object-oriented
- Comes with great documentation
- Can produce rather complex graphics with a small amount of code

## Example usage
```cpp
(NO EXAMPLE YET, CPPTURTLE IS STILL IN THE EARLY STAGES OF DEVELOPMENT)
```

## Installation
To install the library, download or copy and paste all the cpp, hpp and CMake files in the [cppturtle folder](https://github.com/davidfiliks/cppturtle/tree/main/cppturtle) to your project and start using the library right away!

After this, install SDL2 on Linux using a package manager. Below is the command for the Ubuntu package manager. 
```bash
# Install sdl2
sudo apt-get install libsdl2-dev
```

If you are on **Windows 10 build 17063 or later**, you can **cd** into the wanted download directory and paste these commands.
```bash
# Download sdl2.zip
certutil.exe -urlcache -split -f "https://github.com/libsdl-org/SDL/releases/download/release-2.28.5/SDL2-devel-2.28.5-VC.zip" sdl2.zip
# Unzip sdl2.zip
tar -xf sdl2.zip
# Add sdl2 to your CMAKE_PREFIX_PATH environment variable
setx CMAKE_PREFIX_PATH %cd%
```

After doing this, you should be able to `#include` the library's primary header file, `cppturtle.hpp` to your project.
## Building the project
For both Linux and Windows, you can simply paste these commands to build the project.
```bash
# Clone the cppturtle repository
git clone https://github.com/dafiliks/cppturtle.git
# Go into the cppturtle folder
cd cppturtle

# Create a folder called build
mkdir build
# Go into the build folder
cd build
# Use cmake on the previous directory
cmake ..
```

## Documentation 
This library has a very well-written documentation. You can see the full documentation [here](docs/DOCUMENTATION.md). Alternatively, every function in this library has comments regarding its purpose, parameters, return types, etc.

## Issues and pull requests 
If you have any suggestions, ideas, or any sort of contribution, feel free to ask!
Please also open an issue if you have an issue (obviously).

Contribution guidelines can be found [here](CONTRIBUTING.md).

If you found this project interesting and like the idea, feel free to give it a star.

## Legal
Click [here](blob/main/LICENSE) to view the license of the project or just look below.

```
MIT License

Copyright (c) 2023 David Filiks

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
