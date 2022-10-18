# _printf 

## Description
As you may already know, The printf() function sends a formatted string to the standard output (the display). This string can display formatted variables and special control characters.
Our **_printf()** function produces output according to a *format* as described below and writes the output to *stdout*, the standard output stream.

The  **_printf()** function writes the output under the control of a format string that specifies how the following arguments (or arguments accessed via the variable-length argument facilities of ***stdarg(3)*** are converted for output.

### FORMAT
The printf format string is a control parameter used by a class of functions in the input/output libraries of C and many other programming languages. The string is written in a simple template language: characters are usually copied literally into the function's output, but format specifiers, which start with a % character, indicate the location and method to translate a piece of data (such as a number) to characters.

### Conversion specifiers
A conversion specifier is a character that specifies the type of conversion to be applied. Some of the conversion specifiers that we incorporated into our custom _printf function are as follows:
-  **%c**: The **_int_** argument is converted to a char, and the resulting character is written.
-  **%d, %i**: The **_int_** argument should be signed decimal notation, and the resulting number is written.
- **%s**: It is used to print the strings.
- **%**: A '**%**' is written. No argument is converted. The complete conversion specification is '**%%**'.
- **%u**: It is used to print the unsigned integer value where the unsigned integer means that the variable can hold only positive value.
- **%o**: It is used to print the octal unsigned integer where octal integer value always starts with a 0 value.
- **%x**: It is used to print the hexadecimal unsigned integer where the hexadecimal integer value always starts with a 0x value. In this, alphabetical characters are printed in small letters such as a, b, c, etc.
- **%X**: It is used to print the hexadecimal unsigned integer, but %X prints the alphabetical characters in uppercase such as A, B, C, etc.
- **R**: It is used to print ROT13 encoding
- **r**: It is used to print a string in reverse
- **%p**: It is used to print an address by returning pointer.

### Examples

Character: printf("%c", 'A'); Output:: A

String: printf("%s", 'This is a string.'); Output: This is a string.

Integer: printf("%i", 5); Output: 5

## Built With

* [Ubuntu](https://ubuntu.com/)
* [GitHub](https://github.com/)
* [GitBash]
* [ALX - HOLBERTON INTRANET WEBTERMINAL]


### Return Value
* The number of characters printed.

# Project Requirements
-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` `and -pedantic`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the `_putchar` function for this project

## Authorized functions and macros
! write (man 2 write)
! malloc (man 3 malloc)
! free (man 3 free)
! va_start (man 3 va_start)
! va_end (man 3 va_end)
! va_copy (man 3 va_copy)
! va_arg (man 3 va_arg)

### Main Function Prototype
#include "main.h"
```bash
int _printf(const char *format, ...);
```
### Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

### Authors:
* [**Berhane Zerabruk Desta**](https://github.com/berhanez) - [*@berhanezd*](https://twitter.com/berhanezd)
* [**Haile Melaku Ambaye**](https://github.com/Haile-08) - [*@.....*](https://....)


### RESOURCE LINKS
! https://www.ibm.com/docs/en/i/7.2?topic=functions-printf-print-formatted-characters
! https://stackoverflow.com/questions/1735236/how-to-write-my-own-printf-in-c

## License

This project is licensed under the Holberton School Software Engineering Program.
