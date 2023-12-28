// @file tortoise.hpp
//
// @brief Defines the tortoise class and creates prototypes of every function
// @author David Filiks
//
// @copyright 2023 David Filiks


#ifndef TORTOISE_HPP
#define TORTOISE_HPP

#include <iostream>
#include <utility>

#include <SDL.h>

#include "macros_typedefs.hpp"

// @class tortoise
// @brief The main class of the tortoise library
class tortoise
{
private:
	WINDOW* window{ nullptr }; // Pointer to the window
	RENDERER* renderer{ nullptr }; // Renderer used to render things inside window

	int width{}; // Width of the window
	int height{}; // Height of the window

	int cx{}; // Current X-axis position of the last line drawn
	int cy{}; // Current Y-axis position of the last line drawn

public:
	tortoise() = default;
	~tortoise()
	{
		delete this->window;
		delete this->renderer;
	}

	// @brief Initializes a tortoise window
	// @param[in] title Title of the window
	// @param[in] posX X coordinate of the window's location on screen (use CENTERED here to center the window)
	// @param[in] posY Y coordinate of the window's location on screen (use CENTERED here to center the window)
	// @param[in] width Wanted width of the window
	// @param[in] height Wanted height of the window
	// @returns A std::pair of pointers to window and renderer
	std::pair<WINDOW*, RENDERER*> init(const char* title, int posX, int posY, int width, int height);

	// @brief Sets the background color of the tortoise window
	// @param[in] red Amount of red (0-255)
	// @param[in] green Amount of green (0-255)
    // @param[in] blue Amount of blue (0-255)
	// @param[in] alpha Opacity of the final color (0-255)
	// @returns A pointer to renderer
	RENDERER* bgcolor(u8 red, u8 green, u8 blue, u8 alpha);

	// @brief Sets the pencolor of the tortoise
	// @details IF YOU ARE USING THE bgcolor FUNCTION AND THIS FUNCTION, PLEASE USE THE bgcolor FUNCTION BEFORE THIS FUNCTION IN YOUR CODE, OTHERWISE IT WILL NOT WORK!
	// @param[in] red Amount of red (0-255)
	// @param[in] green Amount of green (0-255)
	// @param[in] blue Amount of blue (0-255)
	// @param[in] alpha Opacity of the final color (0-255)
	// @returns A pointer to renderer
	RENDERER* pencolor(u8 red, u8 green, u8 blue, u8 alpha);

	// @brief Moves the tortoise forward (vertically) from down to up
	// @param[in] distance How far the tortoise moves upwards
	// @returns A pointer to renderer
	RENDERER* up(double distance);

	// @brief Moves the tortoise left (horizontally) from right to left
	// @param[in] distance How far the tortoise moves left
	// @returns A pointer to renderer
	RENDERER* left(double distance);

	// @brief Moves the tortoise right (horizontally) from left to right
	// @param[in] distance How far the tortoise moves right
	// @returns A pointer to renderer
	RENDERER* right(double distance);

	// @brief Moves the tortoise backwards (vertically) from up to down
	// @param[in] distance How far the tortoise moves backwards
	// @returns A pointer to renderer
	RENDERER* down(double distance);

	// @brief Rotates the tortoise in degrees and draws a line
	// @param[in] angle How many degrees the tortoise rotates
	// @param[in] nerf By how much distance the distance of the line drawn is shortened (finicky fix, will be updated in future)
	// @returns An SDL_Point{.., ..}
	SDL_Point rotate(double angle, double nerf);

	// @brief Moves the pen (vertically) from down to up without drawing anything
	// @param[in] distance How far the pen moves up
	void penupup(double distance);

	// @brief Moves the pen (horizontally) from right to left without drawing anything
	// @param[in] distance How far the pen moves left
	void penupleft(double distance);

	// @brief Moves the pen (horizontally) from left to right without drawing anything
	// @param[in] distance How far the pen moves right
	void penupright(double distance);

	// @brief Moves the pen (vertically) from up to down without drawing anything
	// @param[in] distance How far the pen moves down
	void penupdown(double distance);

	// @brief Updates the screen with rendering performed since previous call. A wrapper for SDL_RenderPresent()
	void present();

	// @brief Delays the program for an amount of milliseconds. A wrapper for SDL_Delay()
	// @param[in] ms Amount of milliseconds
	void delay(u32 ms);

	// @brief Gets pointer to the window
	// @returns Pointer to the window
	WINDOW* getwindow() const;

	// @brief Gets pointer to the renderer
	// @returns Pointer to the renderer
	RENDERER* getrenderer() const;

	// @brief Gets width of the window
	// @returns The width of the window
	int getwidth() const;

	// @brief Gets height of the window
	// @returns The height of the window
	int getheight() const;

	// @brief Gets the current X-axis position of the latest drawn line
	// @returns Current X-axis position of the latest drawn line
	double getcx() const;

	// @brief Gets the current Y-axis position of the latest drawn line
	// @returns Current Y-axis position of the latest drawn line
	double getcy() const;
};

#endif // TORTOISE_HPP

