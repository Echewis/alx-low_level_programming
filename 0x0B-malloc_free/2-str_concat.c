#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - is the pointer
 * @s1: first string in the code
 * @s2: is the second string
 * Return: always return 0
 */

char *str_concat(char *s1, char *s2)
{
	int cat1 = 0, cat2 = 0;
	char *result = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[cat1])
	{
		cat1++;
	}

	while (s2[cat2])
	{
		cat2++;
	}
	result = malloc(cat1 + cat2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	memcpy(result, s1, cat1);
	memcpy(result + cat1, s2, cat2 + 1);


		return (result);
}
