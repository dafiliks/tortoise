//================================================================================================
/// @file tests.cpp
///
/// @brief Runs a simple program using the library
/// @author David Filiks
///
/// @copyright 2023 David Filiks
//================================================================================================

// Includes
#include "../src/cppturtle.hpp"

// Fix unresolved externals
#undef main

// Main function
int main()
{
	cppturtle turtle{};

	turtle.init("test", 200, 200, 640, 480);
	turtle.bgcolor(50, 200, 10, 255);

	turtle.present();

	turtle.delay(10000);

	return 0;
}
