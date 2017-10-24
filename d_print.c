#include "holberton.h"
/**
 * d_print - Converts integers to chars and prints them.
 *
 * @ap: A pointer to a variadic argument.
 *
 * Return: An integer value.
 */
int d_print(va_list ap)
{
	unsigned int len;
	unsigned int i, j, d;
	int num;
	unsigned int *p;

	num = va_arg(ap, int);
	j = 0;
	if (num < 0)
	{
		_putchar('-');
		num = num - num - num;
		j++;
	}
	i = d = num;
	len = 1;
	while (i /= 10)
		len++;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (-1);
	for (i = 0; i < len; i++)
	{
		p[i] = d % 10;
		d /= 10;
	}
	for (num = len - 1; num >= 0; num--)
	{
		_putchar((p[num] + '0'));
	}
	free(p);
	len += j;
	return (len);
}
