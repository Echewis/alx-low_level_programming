#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string to be searched.
 * @accept: pointer to the string containing the characters to match.
 *
 * Return: number of bytes in the initial segment of @s which consist only
 * of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
		if (s[j] == accept[k])
			break;
		}
		if (accept[k] == '\0')
			return (j);
	}
	return (j);
}
