#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - is a function that returns first element
 * @array: is the list of data
 * @size: is the size of element
 * @cmp: is a pointer
 * Return: will return v or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (v = 0; v <= size; v++)
	{
		if (cmp(array[v]))
			return (v);
	}
	return (-1);
}
