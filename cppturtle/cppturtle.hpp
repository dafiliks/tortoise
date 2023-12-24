#ifndef CPPTURTLE
#define CPPTURTLE

#include <iostream>
#include <utility>
#include <SDL.h>

class cppturtle
{
private:
	int width{};
	int height{};
public:


	/**
	* Initializes a turtle window
	*
	* @param width Wanted width of the window
	* @param height Wanted height of the window
	* @returns std::pair of SDL_Window* window and SDL_Renderer* renderer
	*/
	std::pair<SDL_Window*, SDL_Renderer*> init(int width, int height);

	/**
	* Pauses the program for an amount of milliseconds. A wrapper for SDL_Delay()
	*
	* @param ms Amount of milliseconds
	* @returns void
	*/
	void delay(uint32_t ms);
};

#endif 

