#include "main.h"
#include <stdlib.h>

/**
 * _strdup - the main function
 * @str: is the pointer array
 * Return: always return 0
 */

char *_strdup(char *str)
{
	int y = 0, z = 1;
	char *allo;

	allo = malloc((sizeof(char) * z) + 1);

	if (str == NULL || allo == NULL)
	{
		return (NULL);
	}
	while (str[z])
	{
		z++;
	}
		while (y < z)
		{
			allo[y] = str[y];
			y++;
		}
	allo[y] = '\0';

	return (allo);
}
