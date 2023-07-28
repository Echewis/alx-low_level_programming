#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */


char *cap_string(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
		a++;
	}
	return (s);
}
