#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - is the prototype
 * @b: is the integer to be allocated
 * Return: will return the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
