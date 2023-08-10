#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - is the function
 * @min: is the minimum number
 * @max: is the maximum number
 * Return: will return pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = min + 1;
	}
	return (ptr);
}
