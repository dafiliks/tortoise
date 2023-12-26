# DOCUMENTATION
---
---
# ALL MACROS/TYPEDEFS
---
---
# `#define CENTERED SDL_WINDOWPOS_CENTERED`

# Purpose
Macro for the centre of the screen
---
---
# `#define PI acos(-1)`

# Purpose
Macro for PI
---
---
# `typedef SDL_Window WINDOW;`

# Purpose
Tortoise window object
---
---
# `typedef SDL_Renderer RENDERER;`

# Purpose
Tortoise renderer object
---
---
# `typedef uint8_t u8;`

# Purpose
Shortens uint8_t to u8
---
---
# `typedef uint32_t u32;`

# Purpose
Shortens uint32_t to u32
---
---
# ALL FUNCTIONS
---
---
# `std::pair<WINDOW*, RENDERER*> tortoise::init(const char* title, int posX, int posY, int width, int height)`

# Purpose
Initializes a tortoise window

# Parameters
- **Parameter 1** `title` Title of the window
- **Parameter 2** `posX` X coordinate of the window's location on screen (use `CENTERED` here to center the window horizontally)
- **Parameter 3** `posY` Y coordinate of the window's location on screen (use `CENTERED` here to center the window vertically)
- **Parameter 4** `width` Wanted width of the window
- **Parameter 5** `height` Wanted height of the window

# Returns
A `std::pair` of pointers to `window` and `renderer`
---
---
# `RENDERER* tortoise::bgcolor(u8 red, u8 green, u8 blue, u8 alpha)`

# Purpose
Sets the background color of the tortoise window

# Parameters
- **Parameter 1** `red` Amount of red (0-255)
- **Parameter 2** `green` Amount of green (0-255)
- **Parameter 3** `blue` Amount of blue (0-255)
- **Parameter 4** `alpha` Opacity of the final color (0-255)

# Returns
A pointer to `renderer`
---
---
# `RENDERER* tortoise::pencolor(u8 red, u8 green, u8 blue, u8 alpha)`

# Purpose
Sets the pencolor of the tortoise

# Notice
IF YOU ARE USING THE `bgcolor` FUNCTION AND THIS FUNCTION, PLEASE USE THE `bgcolor` FUNCTION BEFORE THIS FUNCTION IN YOUR CODE, OTHERWISE IT WILL NOT WORK!

# Parameters
- **Parameter 1** `red` Amount of red (0-255)
- **Parameter 2** `green` Amount of green (0-255)
- **Parameter 3** `blue` Amount of blue (0-255)
- **Parameter 4** `alpha` Opacity of the final color (0-255)

# Returns
A pointer to `renderer`
---
---
# `RENDERER* tortoise::up(double distance)`

# Purpose
Moves the tortoise forward (vertically) from down to up

# Parameters
- **Parameter 1** `distance` How far the tortoise moves upwards

# Returns
A pointer to `renderer`
---
---
# `RENDERER* tortoise::left(double distance)`

# Purpose
Moves the tortoise left (horizontally) from right to left

# Parameters
- **Parameter 1** `distance` How far the tortoise moves left

# Returns
A pointer to `renderer`
---
---
# `RENDERER* tortoise::right(double distance)`

# Purpose
Moves the tortoise right (horizontally) from left to right

# Parameters
- **Parameter 1** `distance` How far the tortoise moves right

# Returns
A pointer to `renderer`
---
---
# `RENDERER* tortoise::down(double distance)`

# Purpose
Moves the tortoise backwards (vertically) from up to down

# Parameters
- **Parameter 1** `distance` How far the tortoise moves backwards

# Returns
A pointer to `renderer`
---
---
# `SDL_Point tortoise::rotate(double angle, double nerf)`

# Purpose
Rotates the tortoise in degrees and draws a line

# Parameters
- **Parameter 1** `angle` How many degrees the tortoise rotates
- **Parameter 2** `nerf` By how much distance the distance of the line drawn is shortened ***(finicky fix, will be updated in future)***

# Returns
An `SDL_Point{.., ..}`
---
---
# `void tortoise::penupup(double distance)`

# Purpose
Moves the pen (vertically) from down to up without drawing anything

# Parameters
- **Parameter 1** `distance` How far the pen moves up
---
---
# `void tortoise::penupleft(double distance)`

# Purpose
Moves the pen (horizontally) from right to left without drawing anything

# Parameters
- **Parameter 1** `distance` How far the pen moves left
---
---
# `void tortoise::penupright(double distance)`

# Purpose
Moves the pen (horizontally) from left to right without drawing anything

# Parameters
- **Parameter 1** `distance` How far the pen moves right
---
---
# `void tortoise::penupdown(double distance)`

# Purpose
Moves the pen (vertically) from up to down without drawing anything

# Parameters
- **Parameter 1** `distance` How far the pen moves down
---
---
# `void tortoise::present()`

# Purpose
Updates the screen with rendering performed since previous call. A wrapper for SDL_RenderPresent()
---
---
# `void tortoise::delay(u32 ms)`

# Purpose
Delays the program for an amount of milliseconds. A wrapper for SDL_Delay()

# Parameters
- **Parameter 1** `ms` Amount of milliseconds
---
---
# `WINDOW* tortoise::getwindow()`

# Purpose
Gets pointer to the window

# Returns
A pointer to `window`
---
---
# `RENDERER* tortoise::getrenderer()`

# Purpose
Gets pointer to the renderer

# Returns
A pointer to `renderer`
---
---
# `int tortoise::getwidth()`

# Purpose
Gets width of the window

# Returns
`width` of window
---
---
# `int tortoise::getheight()`

# Purpose
Gets height of the window

# Returns
`height` of window
---
---
# `double tortoise::getcx()`

# Purpose
Gets the current **X-axis** position of the latest drawn line

# Returns
Current **X-axis** position of the latest drawn line
---
---
# `double tortoise::getcy()`

# Purpose
Gets the current **Y-axis** position of the latest drawn line

# Returns
Current **Y-axis** position of the latest drawn line
---
---
