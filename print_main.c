#include "main.h"

/**
 * get_format_func - Get the function for a format specifier
 * @c: The format specifier character
 *
 * Return: Pointer to the function, or NULL if not found
 */
int (*get_format_func(char c))(va_list)
{
	format_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	int i = 0;

	while (formats[i].spec != '\0')
	{
		if (formats[i].spec == c)
			return (formats[i].func);
		i++;
	}
	return (NULL);
}

/**
 * _printf - Custom printf function
 * @format: Format string containing directives
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			func = get_format_func(format[i + 1]);
			if (func != NULL)
			{
				count += func(args);
				i += 2;
				continue;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
