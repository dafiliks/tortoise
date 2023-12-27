#include "src/tortoise.hpp"

#undef main // Fix errors

int main()
{
	tortoise tortoise{}; // Make tortoise object

	tortoise.init("square", CENTERED, CENTERED, 640, 480); // Init the window

	tortoise.bgcolor(0, 0, 0, 255); // Change background color to black
	tortoise.pencolor(255, 255, 255, 255); // Change pen color to white

	// Draw a square
	tortoise.up(50);
	tortoise.left(50);
	tortoise.down(50);
	tortoise.right(50);

	tortoise.present(); // Present the final image
	tortoise.delay(99999); // Don't close the window for 99999 ms

	return 0;
}