#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);

int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_number(int n);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_pointer(va_list args);

/**
 * struct format_specifier - Structure for format specifiers
 * @spec: The format specifier character
 * @func: The function pointer to handle the specifier
 */
typedef struct format_specifier
{
	char spec;
	int (*func)(va_list);
}
format_t;


#endif
