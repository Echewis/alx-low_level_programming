#include "main.h"

/**
 *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 *  Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
