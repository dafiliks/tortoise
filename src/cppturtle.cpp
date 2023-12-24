//================================================================================================
/// @file cppturtle.cpp
///
/// @brief Defines every function in the library
/// @author David Filiks
///
/// @copyright 2023 David Filiks
//================================================================================================

// Includes
#include <SDL.h>
#include "cppturtle.hpp"

std::pair<CPPT_WINDOW*, CPPT_RENDERER*> cppturtle::init(const char* title, int posX, int posY, int width, int height)
{
	SDL_Init(SDL_INIT_VIDEO);

	this->window = SDL_CreateWindow(title, posX, posY, width, height, 0);
	this->renderer = SDL_CreateRenderer(this->window, -1, 0);

	return std::make_pair(this->window, this->renderer);
}

CPPT_RENDERER* cppturtle::bgcolor(u8 red, u8 green, u8 blue, u8 alpha)
{
	SDL_SetRenderDrawColor(this->renderer, red, green, blue, alpha);
	SDL_RenderClear(this->renderer);

	return this->renderer;
}

void cppturtle::present() { SDL_RenderPresent(this->renderer); }

void cppturtle::delay(u32 ms) { SDL_Delay(ms); }