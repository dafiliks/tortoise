# DOCUMENTATION
# `cppturtle::init(const char* title, int posX, int posY, int width, int height)`

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
    turtle.init("test", 500, 500, 1000, 1000);

    return 0;
}
```

<br>
