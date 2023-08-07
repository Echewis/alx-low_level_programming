#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - is the function
 * @size: the unknown size
 * @c: character for array
 * @a: value for unsigned int
 * Return: always retuern 0
 */
char *create_array(unsigned int size, char c)
{
	//unsigned int a;
	char *aray;

	aray = malloc(size * sizeof(char));

	if (size == 0 || aray == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		aray[a] = c;
	}

	return (aray);
}
