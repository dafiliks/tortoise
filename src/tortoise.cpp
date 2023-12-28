// @file tortoise.cpp
//
// @brief Defines every function in the library
// @author David Filiks
//
// @copyright 2023 David Filiks

#include <SDL.h>

#include "tortoise.hpp"

std::pair<WINDOW*, RENDERER*> tortoise::init(const char* title, int posX, int posY, int width, int height)
{
	SDL_Init(SDL_INIT_VIDEO);

	this->window = SDL_CreateWindow(title, posX, posY, width, height, 0);
	this->renderer = SDL_CreateRenderer(this->window, -1, 0);

	this->width = width;
	this->height = height;

	this->cx = width / 2;
	this->cy = height / 2;

	return std::make_pair(this->window, this->renderer);
}

RENDERER* tortoise::bgcolor(u8 red, u8 green, u8 blue, u8 alpha)
{
	SDL_SetRenderDrawColor(this->renderer, red, green, blue, alpha);
	SDL_RenderClear(this->renderer);

	return this->renderer;
}

RENDERER* tortoise::pencolor(u8 red, u8 green, u8 blue, u8 alpha)
{
	SDL_SetRenderDrawColor(this->renderer, red, green, blue, alpha);

	return this->renderer;
}

RENDERER* tortoise::up(double distance)
{
	SDL_RenderDrawLine(this->renderer, this->cx, this->cy, this->cx, this->cy - distance);

	this->cy -= distance;

	return this->renderer;
}

RENDERER* tortoise::left(double distance)
{
	SDL_RenderDrawLine(this->renderer, this->cx, this->cy, this->cx - distance, this->cy);

	this->cx -= distance;

	return this->renderer;
}

RENDERER* tortoise::right(double distance)
{
	SDL_RenderDrawLine(this->renderer, this->cx, this->cy, this->cx + distance, this->cy);

	this->cx += distance;

	return this->renderer;
}

RENDERER* tortoise::down(double distance)
{
	SDL_RenderDrawLine(this->renderer, this->cx, this->cy, this->cx, this->cy + distance);

	this->cy += distance;

	return this->renderer;
}

SDL_Point tortoise::rotate(double angle, double nerf)
{
	SDL_Point point{ this->width / 2, this->height / 2 };

	double rotationangle = (double)angle / 180.0 * PI;
	double sine_ra = sin(rotationangle);
	double cosine_ra = cos(rotationangle);

	point.x -= this->cx;
	point.y -= this->cy;

	double xnew = point.x * sine_ra - point.y * sine_ra;
	double ynew = point.x * sine_ra + point.y * cosine_ra;

	point.x = xnew + this->cx;
	point.y = ynew + this->cy;

	SDL_RenderDrawLine(this->renderer, this->cx, this->cy, point.x - nerf, point.y - nerf);

	this->cx = point.x;
	this->cy = point.y;

	return point;
}

void tortoise::penupup(double distance) { this->cy -= distance; }
void tortoise::penupleft(double distance) { this->cx -= distance; }
void tortoise::penupright(double distance) { this->cx += distance; }
void tortoise::penupdown(double distance) { this->cy += distance; }

void tortoise::present() { SDL_RenderPresent(this->renderer); }

void tortoise::delay(u32 ms) { SDL_Delay(ms); }

WINDOW* tortoise::getwindow() const { return this->window; }
RENDERER* tortoise::getrenderer() const { return this->renderer; }

int tortoise::getwidth() const { return this->width; }
int tortoise::getheight() const { return this->height; }

double tortoise::getcx() const { return this->cx; }
double tortoise::getcy() const { return this->cy; }