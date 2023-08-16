#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - is a function
 * @array: is the array in the function
 * @size: is the size of the array
 * @action: this is the pointer prints the iterator
 * Return: will return at the end of the code
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (action == NULL || array == NULL)
		return;
	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}
