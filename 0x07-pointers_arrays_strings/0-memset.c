#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: the character to fill the memory area with.
 * @n: the number of bytes to be filled.
 *
 * Return: pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
