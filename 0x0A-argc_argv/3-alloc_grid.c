#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - is the function
 * @width: is an integer
 * @height: is also an integer
 * Return: always return 0
 */

int **alloc_grid(int width, int height)
{
	int **array, a, b;
	int num = width * height;

	if (num <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = (int *) malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(array);
			free(array[a]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	for (b = 0; b < width; b++)
	array[a][b] = 0;

	return (array);
}
