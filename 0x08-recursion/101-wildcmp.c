#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings and
 * returns 1 if the strings can be considered
 * identical, otherwise return 0.
 * @s1: pointer to string.
 * @s2: pointer to string.
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (0);
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
		else if (*s1 == '\0')
		{
			return (*s2 == '\0');
		}
		else if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else
		{
			return (0);
		}
}

