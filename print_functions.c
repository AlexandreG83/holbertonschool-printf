#include "main.h"

/**
 * print_char - Prints a character
 * @args: va_list containing the character
 *
 * Return: Number of characters printed (1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Prints a string
 * @args: va_list containing the string
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: va_list (unused)
 *
 * Return: Number of characters printed (1)
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
