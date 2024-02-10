#include "search_algos.h"
#include <math.h>

/**
 * jump_search - This will searche for a value in an array of
 * integers using the Jump search algorithm
 * @array: This is the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: will return the index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index,am, kay, prev;

	if (array == NULL || size == 0)
		return (-1);

	am = (int)sqrt((double)size);
	kay = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		kay++;
		prev = index;
		index = kay * am;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
