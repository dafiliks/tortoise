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
	tortoise tortoise{};

	tortoise.init("example", CENTERED, CENTERED, 640, 480);


	tortoise.bgcolor(0, 0, 0, 255);
	tortoise.pencolor(255, 255, 255, 255);

	tortoise.penupleft(200);
	
	tortoise.forward(50);
	tortoise.left(14);
	tortoise.right(25);

	tortoise.penupright(50);
	tortoise.left(25);
	tortoise.backward(50);
	tortoise.right(25);
	tortoise.forward(50);

	tortoise.penupright(50);
	tortoise.left(40);

	tortoise.present();

	tortoise.delay(99999);

	return 0;
}
