#include <iostream>
#include <SDL.h>

#include "../cppturtle/cppturtle.hpp"

int main(int argc, char *argv[])
{
	cppturtle turtle{};

	turtle.init(1920,1080);

	turtle.delay(10000);

	return 0;
}
