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
    int count = 0;
    char *nil = "(nil)";
    unsigned long addr;
    char hex[16];
    int i, j;
    char *base = "0123456789abcdef";

    if (ptr == NULL)
    {
        for (i = 0; nil[i] != '\0'; i++)
        {
            _putchar(nil[i]);
            count++;
        }
        return count;
    }

    addr = (unsigned long)ptr;
    i = 0;

    while (addr > 0)
    {
        hex[i] = base[addr % 16];
        addr /= 16;
        i++;
    }

    _putchar('0');
    _putchar('x');
    count += 2;

    for (j = i - 1; j >= 0; j--)
    {
        _putchar(hex[j]);
        count++;
    }

    return count;
}
