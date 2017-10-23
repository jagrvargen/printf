#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdarg.h>

typedef struct specs
{
	char *c;
	int (*print_f)(va_list);
} spec_list;

int _putchar(char c);

int _printf(const char *format, ...);

int _putchar_c(va_list ap);

int _putchar_s(va_list ap);

#endif
