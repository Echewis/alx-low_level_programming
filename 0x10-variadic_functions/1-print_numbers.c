#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - is a function
 * @separator: removes unwanted element
 * @n:: is the list of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int v;
	int m;

	va_start(list, n);

	for (v = 0; v < n; v++)
	{
		m = va_arg(list, int);

		printf("%d", m);
	if (v != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}

	printf("\n");

	va_end(list);
}
