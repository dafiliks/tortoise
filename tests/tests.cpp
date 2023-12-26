// @file tests.cpp
//
// @brief Runs a simple program using the library
// @author David Filiks
//
// @copyright 2023 David Filiks

#include "../src/tortoise.hpp"

#undef main // Fix unresolved externals

int main()
{
	// Create tortoise object
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
