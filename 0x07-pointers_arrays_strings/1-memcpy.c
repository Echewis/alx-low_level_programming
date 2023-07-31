#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: pointer to the destination array where the content is to be copied.
 * @src: pointer to the source of data to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to the destination array @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
