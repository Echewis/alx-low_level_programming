#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - is a pointer
 * @separator: is a string
 * @n: is the number of int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int q;

	va_start(list, n);
	for (q = 0; q < n; q++)
	{
		printf("%s", va_arg(list, char*));
	if (q != (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
	else if (separator == NULL)
	{
		printf("nil");
	}
	}
	printf("\n");
	va_end(list);
}
