#include <stdio.h>

/**
 * print_number - function that help to print an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
int count = 0;
unsigned int num;

if (n < 0)
{
	_putchar('-');
	count++;
}

num = -n

if (num / 10 > 0)
	count += print_number(num / 10);

_putchar('-');
count++;
return (count);
}
