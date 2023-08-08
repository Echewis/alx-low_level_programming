#include "main.h"
#include <stdlib.h>

/**
 * free_grid - is the function
 * @grid: is a double pointer
 * @height: integer to be freed
 */

void free_grid(int **grid, int height)
{
	int s;

	for (s = 0; s < height; s++)
	{
		free(grid[s]);
	}
	free(grid[s]);
}
