#include "holberton.h"

/**
 * s_print - Prints a string.
 *
 * @ap: A pointer to a variadic string argument
 *
 * Return: An integer value.
 */
int s_print(va_list ap) /* Function to write string */
{
	int i;
	char *s;

	s = va_arg(ap, char *);
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i - 1);
}
