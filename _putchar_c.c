#include "holberton.h"

/**
 * _putchar_c - Prints a single char
 *
 * @ap: A pointer to a variadic argument
 *
 * Return: An integer value
 */
int _putchar_c(va_list ap) /* Function to write single char */
{
        _putchar(va_arg(ap, int));
        return (1);
}
