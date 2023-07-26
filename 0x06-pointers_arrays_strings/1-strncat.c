#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 *  Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
