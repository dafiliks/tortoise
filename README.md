<h1 align="center">tortoise</h1>
<p align="center">
<img src="assets/cropped.jpg" align="center" width="500" height="200" title="logo">
<br>
<img alt="GitHub Workflow Status" align="center" src="https://img.shields.io/github/actions/workflow/status/dafiliks/tortoise/cmake-multi-platform.yml">
<img alt="GitHub Project Licence" align="center" src="https://img.shields.io/github/license/dafiliks/tortoise">
</p>
<br> <br>

This library is an implementation of the [Python turtle library](https://docs.python.org/3/library/turtle.html) in C++ using [SDL2](https://github.com/libsdl-org/SDL/tree/SDL2). I created this library so that people of all programming skill levels can create cool-looking graphics!

This library is great because:
- Is very easy to use
- Perfect for beginners to learn C++ syntax
- Is object-oriented
- Comes with great documentation
- Can produce rather complex graphics with a small amount of code

## Example usage
This is how the logo you see above was made.

You can see the full file [here](tests/tests.cpp).

***(Please note that there are much more efficient ways to do this with only a fraction of the amount of code that was used here)***
```cpp
#include "../src/tortoise.hpp"

#undef main // Fix unresolved externals

int main()
{
	// Create a tortoise object
	tortoise tortoise{};

	// Initialize the window, with the name "example", its position centered on the screen, with a width of 640 and a height of 480
	tortoise.init("example", CENTERED, CENTERED, 640, 480);

	// Change the background to black
	tortoise.bgcolor(0, 0, 0, 255);

	// T
	tortoise.pencolor(242, 223, 215, 255);
	tortoise.penupleft(200);
	tortoise.up(50);
	tortoise.left(12.5);
	tortoise.right(25);

	// O
	tortoise.pencolor(254, 249, 255, 255);
	tortoise.penupright(40);
	tortoise.left(25);
	tortoise.down(50);
	tortoise.right(25);
	tortoise.up(50);

	// R
	tortoise.pencolor(212, 193, 236, 255);
	tortoise.penupright(40);
	tortoise.left(25);
	tortoise.down(50);
	tortoise.up(30);
	tortoise.right(25);
	tortoise.up(20);
	tortoise.down(20);
	tortoise.left(25);
	tortoise.rotate(130, 52);

	// T
	tortoise.pencolor(159, 159, 237, 255);
	tortoise.penupup(52);
	tortoise.penupleft(70);
	tortoise.penupright(40);
	tortoise.up(50);
	tortoise.left(12.5);
	tortoise.right(25);

	// O
	tortoise.pencolor(115, 108, 237, 255);
	tortoise.penupright(40);
	tortoise.left(25);
	tortoise.down(50);
	tortoise.right(25);
	tortoise.up(50);

	// I
	tortoise.pencolor(255, 209, 102, 255);
	tortoise.penupright(20);
	tortoise.down(50);

	// S
	tortoise.pencolor(6, 214, 160, 255);
	tortoise.penupright(20);
	tortoise.right(25);
	tortoise.up(25);
	tortoise.left(25);
	tortoise.up(25);
	tortoise.right(25);

	// E
	tortoise.pencolor(239, 71, 111, 255);
	tortoise.penupright(20);
	tortoise.down(50);
	tortoise.right(25);
	tortoise.left(25);
	tortoise.up(25);
	tortoise.right(25);
	tortoise.left(25);
	tortoise.up(25);
	tortoise.right(25);
	tortoise.left(25);

	tortoise.present(); // Present final piece

	tortoise.delay(99999); // Don't close the window for 99999 ms

	return 0;
}
```

## Dependencies
The only dependency of this library is SDL2.

To install it on Linux, use the package manager of your distro. For the Ubuntu package manager, you can paste the command below into the terminal.
```bash
# Install sdl2
sudo apt-get install libsdl2-dev
```

To install it on Windows, if you are on **Windows 10 build 17063 or later**, you can **cd** into the wanted download directory and paste these commands.
```bash
# Download sdl2.zip
certutil.exe -urlcache -split -f "https://github.com/libsdl-org/SDL/releases/download/release-2.28.5/SDL2-devel-2.28.5-VC.zip" sdl2.zip
# Unzip sdl2.zip
tar -xf sdl2.zip
# Add sdl2 to your CMAKE_PREFIX_PATH environment variable
setx CMAKE_PREFIX_PATH %cd%
```

## Documentation 
This library has a very well-written documentation. You can see the full documentation [here](docs/DOCUMENTATION.md). Alternatively, every function in this library has comments regarding its purpose, parameters, return types, etc.

## Issues and pull requests 
If you have any suggestions, ideas, or any sort of contribution, feel free to ask!
Please also open an issue if you have an issue (obviously).

Contribution guidelines can be found [here](CONTRIBUTING.md).

If you found this project interesting and like the idea, feel free to give it a star.

## Legal
Click [here](LICENSE) to view the license of the project or just look below.

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
