#include "main.h"

/**
 * print_pointer - Prints a pointer address
 * @args: va_list containing the pointer
 *
 * Return: Number of characters printed
 */
int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;
	unsigned long int hex[32];
	int i = 0, count = 0;
	char *base = "0123456789abcdef";

	count += _putchar('0');
	count += _putchar('x');

	if (address == 0)
		return (count + _putchar('0'));
	if (ptr == NULL)
	  {
	    return(_printf("%p", ptr));
	    return (5);
	  }
	while (address > 0)
	{
		hex[i] = address % 16;
		address /= 16;
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
