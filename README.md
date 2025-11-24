-- Project --

C - printf | Holberton School


-- Global description --

This project is a customised creation of the printf function from the standard C library. It handles the conversion of formatted outputs and printing to stdout.


-- The prototype --

int _printf(const char *format, ...);


-- Requirements --

GCC compiler with flags: -Wall -Werror -Wextra -pedantic -std=gnu89
Betty style 


-- Features --

%c - Character
%s - String
%% - Percent sign
%d - Decimal integer
%i - Integer
And prints characters, strings and integers.


-- Files --

README.md - This file
main.h - Header file
functions.c - the print functions (char, string, percent)
man_3_printf - Man page


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


-- Authors --

AlexandreG83
adib-commits

