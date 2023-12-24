#include <SDL.h>
#include "cppturtle.hpp"

std::pair<SDL_Window*, SDL_Renderer*> cppturtle::init(int width, int height)
{
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;

	SDL_Init(SDL_INIT_VIDEO);
	SDL_CreateWindowAndRenderer(width, height, 0, &window, &renderer);

	SDL_RenderPresent(renderer);

	return std::make_pair(window, renderer);
}

void cppturtle::delay(std::uint32_t ms) { SDL_Delay(ms); }