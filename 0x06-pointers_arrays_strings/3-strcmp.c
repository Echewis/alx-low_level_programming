#include "main.h"
/**
 * _strcmp - compares two strings
 *  @s1: first string
 *  @s2: second string
 *
 *  Return: 0 if the strings are equal,
 *  negative value if s1 is less than s2,
 *  positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
		return (0);
		a++;
	}
	return (s1[a] - s2[a]);
}
