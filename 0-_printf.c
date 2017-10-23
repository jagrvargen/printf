#include "holberton.h"
#include <stdio.h>
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
	int i, j, count;
	spec_list specs[] = /* A struct with sifts for functions */
		{
			{"c", c_print},
			{"s", s_print},
			{"\0", NULL}
		};

	va_start(ap, format);
	i = 0;
	count = 0;
	if (format == NULL)
		return (-1);
	while (format[i] != '\0') /* Iterate through format */
	{
		if (format[i] == '%') /* If loop finds %, */
		{
			i++;
			j = 0;
			/* Look through specs for matching char */
			while (format[i] != *(specs[j]).c && *(specs[j]).c != '\0')
				j++;
			/* If match found, call print function */
			if (*(specs[j]).c != '\0')
			{
				count += specs[j].print_f(ap);
				i++;
			}
			else
			{
				_putchar('%');
				if (format[i] == '\0')
					return (-1);
				else if (format[i] != '%')
				{
					_putchar(format[i]);
					count += 1;
				}
				count += 1;
				i++;
			}
		}
		else
			_putchar(format[i++]);
	}
	va_end(ap);
	return (count + i); /* Return the number of chars printed except '\0'*/
}
