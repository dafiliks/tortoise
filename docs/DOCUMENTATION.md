# DOCUMENTATION
# `std::pair<CPPT_WINDOW*, CPPT_RENDERER*> cppturtle::init(const char* title, int posX, int posY, int width, int height)`

# Purpose
This function initializes a turtle window.

# Parameters
- **Parameter 1** `title` Title of the window
- **Parameter 2** `posX` X coordinate of the window's location on screen (use CPPT_WINDOWPOS_CENTERED here to center the window horizontally)
- **Parameter 3** `posY` Y coordinate of the window's location on screen (use CPPT_WINDOWPOS_CENTERED here to center the window vertically)
- **Parameter 4** `width` Wanted width of the window
- **Parameter 5** `height` Wanted height of the window

# Returns
A `std::pair` of pointers to `this->window` and `this->renderer`

# Usage
```cpp
int main()
{
    cppturtle turtle{};

    turtle.init("test", 200, 200, 640, 480);

    return 0;
}
```

# `CPPT_RENDERER* cppturtle::bgcolor(u8 red, u8 green, u8 blue, u8 alpha)`

# Purpose
This function sets the background color of the turtle window.

# Parameters
- **Parameter 1** `red` Amount of red (0-255)
- **Parameter 2** `green` Amount of green (0-255)
- **Parameter 3** `blue` Amount of blue (0-255)
- **Parameter 4** `alpha` Opacity of the final color (0-255)

# Returns
A pointer to `this->renderer`

# Usage
```cpp
int main()
{
    cppturtle turtle{};

    turtle.init("test", 200, 200, 640, 480);
    turtle.bgcolor(100, 100, 100, 255);

    return 0;
}
```

# `void cppturtle::present()`

# Purpose
Updates the screen with rendering performed since previous call. A wrapper for `SDL_RenderPresent()`.

# Parameters
This function has no parameters.

# Returns
This function is of type `void` and returns nothing.

# Usage
```cpp
int main()
{
    cppturtle turtle{};

    turtle.init("test", 200, 200, 640, 480);
    turtle.bgcolor(100, 100, 100, 255);

    turtle.present();

    return 0;
}
```

# `void cppturtle::delay(u32 ms)`

# Purpose
Delays the program for an amount of milliseconds. A wrapper for `SDL_Delay()`.

# Parameters
- **Parameter 1** `ms` Amount of milliseconds
  
# Returns
This function is of type `void` and returns nothing.

# Usage
```cpp
int main()
{
    cppturtle turtle{};

    turtle.init("test", 200, 200, 640, 480);
    turtle.bgcolor(100, 100, 100, 255);

    turtle.delay(10000);

    return 0;
}
```
