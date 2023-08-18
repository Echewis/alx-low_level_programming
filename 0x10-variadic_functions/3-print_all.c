#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all _ is a function
 * @char: pointer to array
 * @format: is the format
 */
void print_all(const char * const format, ...)
{
	va_list list;
	va_start(list, format);

	for (const char *pt = format; *pt != '\0'; pt++)
	{
		switch (*pt)
		{
		
			case 'c' : {
			int c = va_arg(list, int);
			printf("%c ", c);
			break;
				   }
			case 'i' : {
			int i = va_arg(list, int);
			printf("%d ", i);
			break;
				}

			case 'f' : {
			double f = va_arg(list, double);
			printf("%f ", f);
			break;
				   }

			case 's' : {
			char *s = va_arg(list, char *);
			printf("%s ", s);
			break;
				   }
		}
	}
	printf("\n");
	va_end(list);
}
