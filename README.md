-- Project --

C - printf | Holberton School


-- Global description --

This project involves recreating the printf function from the standard C language library.
Understand how printf works internally: analyse a formatting string, handle different conversions (such as %d, %s, %c, etc.) and display the result on the screen.
It manages the conversion of formatted outputs and printing to stdout.


-- The prototype --

int _printf(const char *format, ...);


-- Requirements --

Ubuntu 20.04 LTS

GCC with the flags:
	-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

No global variables

At most 5 functions per file

Betty style compliance

Header file main.h must contain all prototypes



-- Features --

%c - Character
%s - String
%% - Percent sign
%d - Decimal integer
%i - Integer
And prints characters, strings and integers.


-- Files --

README.md - This file
_printf.c - primary function for the parsing
main.h - Header file
functions.c - The print functions (%c for char, %s for string, %% for percent)
print_numbers.c - The print functions (%d, %i for int)
man_3_printf - Man page of _printf


-- Compilation --

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c



-- Main file --

#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}


-- Return Value --

The function returns the number of characters printed (excluding the null byte).



-- Example Usage --
_printf("Hello %s!\n", "world");
_printf("Number: %d\n", 42);
_printf("Percent: %%\n");


-- Authors --

AlexandreG83 | adib-commits

