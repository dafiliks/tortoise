//================================================================================================
/// @file cppturtle.hpp
///
/// @brief Defines the cppturtle class and creates prototypes of every function
/// @author David Filiks
///
/// @copyright 2023 David Filiks
//================================================================================================


#ifndef CPPTURTLE
#define CPPTURTLE

// Includes 
#include <iostream>
#include <utility>
#include <SDL.h>
#include "cppt_macros_typedefs.hpp"

/// @class cppturtle
/// @brief The main class of the cppturtle library
class cppturtle
{
private:
	int width{}; // Width of the window
	int height{}; // Height of the window
public:
	CPPT_WINDOW* window = nullptr; // Pointer to the window
	CPPT_RENDERER* renderer = nullptr; // Renderer used to render things inside window


	/// @brief Initializes a turtle window
	/// @param[in] title Title of the window
	/// @param[in] posX X coordinate of the window's location on screen (use CPPT_WINDOWPOS_CENTERED here to center the window)
	/// @param[in] posY Y coordinate of the window's location on screen (use CPPT_WINDOWPOS_CENTERED here to center the window)
	/// @param[in] width Wanted width of the window
	/// @param[in] height Wanted height of the window
	/// @returns A std::pair of pointers to this->window and this->renderer
	std::pair<CPPT_WINDOW*, CPPT_RENDERER*> init(const char* title, int posX, int posY, int width, int height);

	/// @brief Sets the background color of the turtle window
	/// @param[in] red Amount of red (0-255)
	/// @param[in] green Amount of green (0-255)
    /// @param[in] blue Amount of blue (0-255)
	/// @param[in] alpha Opacity of the final color (0-255)
	/// @returns A pointer to this->renderer
	CPPT_RENDERER* bgcolor(u8 red, u8 green, u8 blue, u8 alpha);

	/// @brief Updates the screen with rendering performed since previous call. A wrapper for SDL_RenderPresent()
	void present();

	/// @brief Delays the program for an amount of milliseconds. A wrapper for SDL_Delay()
	/// @param[in] ms Amount of milliseconds
	void delay(u32 ms);
};

#endif /// CPPTURTLE.HPP

