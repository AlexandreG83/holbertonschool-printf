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

/**
 * print_unsigned - Prints an unsigned int in decimal
 * @args: va_list containing the number
 *
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    unsigned int num;
    int count = 0;
    num = n;

    if (num == 0)
        return _putchar('0');

    while (num > 0)
    {
        _putchar((num % 10) + '0');
        num /= 10;
        count++;
    }

    return count;
}

/**
 * print_binary - Prints an unsigned int in octal representation
 * @args: va_list containing the number
 *
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[50]; 
    int i = 0, count = 0;

    if (n == 0)
        return _putchar('0');

    while (n > 0)
    {
        buffer[i++] = (n % 8) + '0';
        n /= 8;
    }

    while (i--)
        count += _putchar(buffer[i]);

    return count;
}

/**
 * print_hex - Prints an unsigned int in lowercase hexadecimal
 * @args: va_list containing the number
 *
 * Return: Number of characters printed
 */
int print_hex(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[50];
    char hex[] = "0123456789abcdef";
    int i = 0, count = 0;

    if (n == 0)
        return _putchar('0');

    while (n > 0)
    {
        buffer[i++] = hex[n % 16];
        n /= 16;
    }

    while (i--)
        count += _putchar(buffer[i]);

    return count;
}

/**
 * print_hex_upper - Prints an unsigned int in uppercase hexadecimal
 * @args: va_list containing the number
 *
 * Return: Number of characters printed
 */
int print_hex_upper(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[50];
    char hex[] = "0123456789ABCDEF";
    int i = 0, count = 0;


    if (n == 0)
        return _putchar('0');

    while (n > 0)
    {
        buffer[i++] = hex[n % 16];
        n /= 16;
    }

    while (i--)
        count += _putchar(buffer[i]);

    return count;
}
