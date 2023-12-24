# CONTRIBUTION GUIDELINES

This guideline will cover how you can contribute to the project.
<br>

# Step 1: Choose the right branch
Make sure you choose the **dev** branch to make pull requests. 

# Step 2: Make changes
If you want to add a feature, fix a bug, or even update the README, write code/text that looks like the already existing code/text. Don't clutter up the code or remove important comments. 

If you are adding a new function/variable/macro/typedef/class, please add comments above it or next to it which look similar to the below.

An example for a function:
```cpp
/// @brief Multiplies two numbers
/// @param[in] a Holds value of the first value
/// @param[in] b Holds value of the second value
/// @returns The sum of the two numbers
int sum(int a, int b);
```

An example for a variable:
```cpp
int a{}; /// Holds value of ...
```

An example for a macro/typedef:
```cpp
#define PI 3.14 /// Value of PI
typedef uint8_t u8 /// Shortens uint8_t to u8
```

An example for a class:
```cpp
/// @class abc
/// @brief Class used for ...
class abc {};
```

# Step 3: Create the pull request
After you submit your pull request, I will get back to you shortly and give you feedback or I will just merge your commits straight away.
