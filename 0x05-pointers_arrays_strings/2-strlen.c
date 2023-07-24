#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to get length of
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int wen = 0;

	while (*s != '\0')
	{
		wen++;
		s++;
	}
	return (wen);
}
