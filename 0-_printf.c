#include "holberton.h"

/**
 * _printf - Produces output according to a format.
 *
 * @format: A pointer to a constant character string.
 *
 * Return: An integer value which is a count of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, count = 0;
	spec_list specs[] = /* A struct with sifts for functions */
		{
			{"c", c_print},
			{"s", s_print},
			{NULL, NULL}
		};

	va_start(ap, format);
	while (format[i] != '\0') /* Iterate through format */
	{
		if (format[i++] == '%') /* If loop finds %, */
		{
			if (format[i] == '%')
			{
				_putchar('%');
				count += 1;
				i++;
			}
			else
			{
				j = 0;
				/* Look through specs for matching char */
				while (format[i] != *(specs[j]).c)
					j++;
				/* If match found, call print function */
				if (specs[j].c != NULL)
				{
					count += specs[j].print_f(ap);
					i++;
				}
			}
		}
		_putchar(format[i++]);
	}
	va_end(ap);
	return (count + i); /* Return the number of chars printed except '\0'*/
}
