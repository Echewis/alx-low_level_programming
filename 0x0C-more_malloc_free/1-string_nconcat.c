#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - is the prototype
 * @s1: is the first string
 * @s2: is the second string
 * @n: the unknown int
 * Return: will return the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *pnt;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}

	pnt = malloc(a + n + 1);

	if (pnt == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		pnt[a] = s1[a];
	}

	for (b = 0; s2[b] != '\0' && b < n; b++, a++)
	{
		pnt[a] = s2[b];
	}

	pnt[a] = '\0';
	return (pnt);
}
