#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to be searched.
 * @accept: pointer to the string containing the characters to match.
 *
 * Return: pointer to the byte in @s that matches one of the bytes in @accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
		if (s[a] == accept[c])
		return (&s[a]);
		}
	}
	return (NULL);
}
