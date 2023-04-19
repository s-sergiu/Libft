# Libft

## Brief description of the project:
The goal of the project is to create a library of useful functions that can be used in future projects. The library contains functions for manipulating strings, memory, and lists, as well as other common programming tasks.

## Installation instructions
 Use make to make to compile the static library:
* ```make``` 

Or cmake: 
* ```cmake -S . -B build```
* ```cmake --build build```

## Usage examples
 To be able to use it within your project you need to link it using the -I when you compile your object files.
 Example:
* ``` NAME = name of main project```
* ``` INC_FLAGS = path to your include directory```
* ``` cc -Wall -Werror -Wextra -c source.c -o source.o -I$(INC_FLAGS)```
* ``` LIBFT_OBJ = path to your libft.a file```
* ``` cc -Wall -Werror -Wextra source.o -lft -L$(LIBFT_OBJ) -o $(NAME)```

## Any dependencies or prerequisites required for the project
* GCC compiler;
* GNU Make;
* GNU ar;
