#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - is the function
 * @n: is the size of argument
 * Return: will return add
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	int add = 0;
	unsigned int v;

	va_start(list, n);

	for (v = 0; v < n; v++)
	{
		if (n == 0)
		return (0);
		add += va_arg(list, int);
	}

	va_end(list);

	return (add);
}
