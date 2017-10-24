#include "holberton.h"

/**
 * c_print - Prints a single char
 *
 * @ap: A pointer to a variadic argument
 *
 * Return: An integer value
 */
int c_print(va_list ap) /* Function to write single char */
{
	if (ap == NULL)
		_putchar(' ');
	else
		_putchar(va_arg(ap, int));
        return (1);
}
