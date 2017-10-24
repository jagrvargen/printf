#include "holberton.h"

/**
 * r_string - Function which reverses a string.
 *
 * @ap: A pointer to a variadic argument.
 *
 * Return: An integer value.
 */
int r_print(va_list ap)
{
	int len, i, k;
	char *p;
	char *s;

	s = va_arg(ap, char*);
	if (s == NULL)
		return (-1);
	len = _strlen(s);
	p = malloc(sizeof(char) * len);
	if (!p)
		return (-1);
	k = len - 1;
	for (i = 0; i < len; i++)
	{
		p[i] = s[k];
		k--;
	}
	for (i = 0; i < len; i++)
		_putchar(p[i]);
	free(p);
	return (len);
}

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0';)
		len++;
	return (len);
}
