#include "holberton.h"

int _putchar_c(va_list ap);
int _putchar_s(va_list ap);

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
	int i, j;
	int count; /* Number of characters printed except '\0'*/
	spec_list specs[] = /* A struct with sifts for functions */
		{
			{"c", _putchar_c},
			{"s", _putchar_s},
			{NULL, NULL}
		};

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i] != '\0') /* Iterate through format */
	{
		if (format[i] == '%') /* If loop finds %, */
		{
			i++;          /* If double %%, print % */
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
		_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count + i); /* Return the number of chars printed except '\0'*/
}

int _putchar_c(va_list ap) /* Function to write single char */
{
	_putchar(va_arg(ap, int));
	return (1);
}

int _putchar_s(va_list ap) /* Function to write string */
{
	int i;
	char *s;

	s = va_arg(ap, char *);
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i - 1);
}
