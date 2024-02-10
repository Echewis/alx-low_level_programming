#include "search_algos.h"

/**
 * recursive_search - This is a searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: This is an input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: It will return the index of the number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t a;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (a = 0; a < size; a++)
		printf("%s %d", (a == 0) ? ":" : ",", array[a]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - This calls to binary_search to return
 * the index of the number
 * @array: It's the input array
 * @size: This is the size of the array
 * @value: This is the value to search in
 * Return: This will return the index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursive_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
