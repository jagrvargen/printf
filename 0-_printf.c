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
	int count, nullcheck, i;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	nullcheck = 0;
	i = count = 0;
	while (format[i] != '\0') /* Iterate through format */
	{
		if (format[i] == '%') /* If loop finds %, */
		{
			i++;
			nullcheck = specifier(format, ap, i);
			i++;
			if (nullcheck == -1)
				return (-1);
			count += nullcheck;
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count); /* Return the number of chars printed except '\0'*/
}

/**
 * specifier - function that processes modification of printf specifier.
 *
 * @format: A pointer to a constant string.
 * @ap: A pointer to a variadic argument.
 * @i: An integer iterator.
 *
 * Return: An integer value.
 */
int specifier(const char *format, va_list ap, int i)
{
	int j, count;
	spec_list specs[] = /* A struct with sifts for functions */
	{
		{"c", c_print},
		{"s", s_print},
		{"d", d_print},
		{"i", d_print},
		{"\0", NULL}
	};

	count = 0;
	if (format[i] == '\0')
		return (-1);
	j = 0;
	while (format[i] != *(specs[j]).c && *(specs[j]).c != '\0')
		j++;
	if (*(specs[j]).c != '\0')
	{
		count += specs[j].print_f(ap);
		if (count == -1)
			return (-1);
		i++;
	}
	else
	{
		_putchar('%');
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count += 1;
		}
		count += 1;
		i++;
	}
	return (count);
}
