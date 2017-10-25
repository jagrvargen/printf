#include "holberton.h"

int bin_print(va_list ap)
{
	unsigned int len, num, i;
	unsigned int arr[31];

	num = va_arg(ap, unsigned int);
	if (!num)
		return (-1);
	len = 0;
	i = 1;
	while (num > 0)
	{
		arr[i] = (num % 2);
		num = num / 2;
		len++;
		i++;
	}
	while (i > 0)
	{
		_putchar((arr[i] + '0'));
		i--;
	}
	return (len);
}
