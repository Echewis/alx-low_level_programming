#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - is the main function
 * @ptr: is a pointer
 * @old_size: is the old size
 * @new_size: is the new size
 * Return: always return 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pr;
	unsigned int a, b = new_size;
	char *oldx = ptr;

	if (ptr == NULL)
	{
		pr = malloc(new_size);
		return (pr);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	pr = malloc(new_size);
	if (pr == NULL)
		return (NULL);
	if (new_size > old_size)
		b = old_size;

	for (a = 0; a < b; a++)
		pr[a] = oldx[a];
	free(ptr);
	return (pr);
}
