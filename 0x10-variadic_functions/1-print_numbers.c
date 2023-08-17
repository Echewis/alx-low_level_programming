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

	unsigned int m, v;

	va_start(list, n);

	for (v = 0; v < n; v++)
	{
		if (separator == NULL)

		m = va_arg(list, int);

		printf("%d, ", m);
	}

	printf("\n");

	va_end(list);
}
