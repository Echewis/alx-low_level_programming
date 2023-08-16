#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - is the first function
 *
 * @name: is a pointer
 * @f: helps to define the pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);

}

/**
 * pr - prints out the name
 *
 * @name: name to be printed
 *
 */
/*void pr(char *name)
{

	printf("%s\n", name);
}*/
