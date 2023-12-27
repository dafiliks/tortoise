// @file macros_typedefs.hpp
//
// @brief Defines some useful macros and typedefs
// @author David Filiks
//
// @copyright 2023 David Filiks


#ifndef MACROS_TYPEDEFS_HPP
#define MACROS_TYPEDEFS_HPP

#include <iostream>

#include <SDL.h>

#define CENTERED SDL_WINDOWPOS_CENTERED // Macro for the centre of the screen
#define PI acos(-1) // Macro for PI

typedef SDL_Window WINDOW; // Tortoise window object
typedef SDL_Renderer RENDERER; // Tortoise renderer object

typedef uint8_t u8; // Shortens uint8_t to u8
typedef uint32_t u32; // Shortens uint32_t to u32


#endif // MACROS_TYPEDEFS_HPP