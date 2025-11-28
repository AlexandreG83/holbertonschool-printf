#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary
 * @args: va_list containing the number
 *
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
    unsigned int number = va_arg(args, unsigned int);
    unsigned int test_bits = 1 << (sizeof(unsigned int) * 8 - 1);
    int count = 0;
    int ignore_zeros = 0;

    if (number == 0)
        return (_putchar('0'));

    while (test_bits != '\0')
    {
        if (number & test_bits)
        {
            _putchar('1');
            count++;
            ignore_zeros = 1;
        }
        else if (ignore_zeros)
        {
            _putchar('0');
            count++;
        }
        test_bits >>= 1;
    }

    return count;
}
