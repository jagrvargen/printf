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

int c_print(va_list ap);

int s_print(va_list ap);

int d_print(va_list ap);

#endif
