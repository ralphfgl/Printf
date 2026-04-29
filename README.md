*This activity has been created as part of the 42 curriculum by rfeghali.*

# ft_printf

## Description

The goal of this project is to recreate a simplified version of the standard `printf` function. It handles formatted output to standard output using a format string and a variable number of arguments.

This project focuses on variadic functions, format parsing, and  output handling.

## Instructions

### Compilation
```bash
cc -Wall -Wextra -Werror *.c

## Library Creation

You can also create a library:

```bash
ar rcs libftprintf.a *.o

## Algorithm Explanation

The core idea of `printf` is to format and print data to standard output using a format string and a variable number of arguments.

- The function parses the format string character by character.
- When a normal character is found, it is printed directly.
- When a `%` is found, it indicates a format specifier.
- The next character determines the type (e.g. `%d`, `%s`, `%c`).
- `va_list` is used to access the variable arguments.
- Each specifier is handled by a dedicated function that converts the value to a string and prints it.

This design allows flexible formatted output without knowing numbers of argument or argument types in advance.

## Resources

- `man 3 printf`
- `man 3 stdarg`
- [CodeVault video](https://www.youtube.com/watch?v=oDC208zvsdg)

## AI Usage

AI was used to:

- Structure and correct the README
