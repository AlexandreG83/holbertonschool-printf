#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @args: va_list containing the unsigned integer
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int divisor = 1;
	unsigned int temp;
	int count = 0;

	if (n == 0)
		return (_putchar('0'));

	temp = n;
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		count++;
		n %= divisor;
		divisor /= 10;
	}

	return (count);
}

/**
 * print_octal - Prints a number in octal format
 * @args: va_list containing the unsigned integer
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int octal[32];
	int i = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		octal[i] = n % 8;
		n /= 8;
		i++;
	}

	i--;
	while (i >= 0)
	{
		_putchar(octal[i] + '0');
		count++;
		i--;
	}

	return (count);
}

/**
 * print_hex_lower - Prints a number in lowercase hexadecimal
 * @args: va_list containing the unsigned integer
 *
 * Return: Number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int hex[32];
	int i = 0, count = 0;
	char *base = "0123456789abcdef";

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		hex[i] = n % 16;
		n /= 16;
		i++;
	}

	i--;
	while (i >= 0)
	{
		_putchar(base[hex[i]]);
		count++;
		i--;
	}

	return (count);
}

/**
 * print_hex_upper - Prints a number in uppercase hexadecimal
 * @args: va_list containing the unsigned integer
 *
 * Return: Number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int hex[32];
	int i = 0, count = 0;
	char *base = "0123456789ABCDEF";

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		hex[i] = n % 16;
		n /= 16;
		i++;
	}

	i--;
	while (i >= 0)
	{
		_putchar(base[hex[i]]);
		count++;
		i--;
	}

	return (count);
}

/**
 * print_binary - Prints a number in binary format
 * @args: va_list containing the unsigned integer
 *
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int binary[32];
	int i = 0, count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}

	i--;
	while (i >= 0)
	{
		_putchar(binary[i] + '0');
		count++;
		i--;
	}

	return (count);
}
