#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string @s.
 */

char *string_toupper(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		if (s[v] >= 'a' && s[v] <= 'z')
		s[v] -= 32;
		v++;
	}
	return (s);
}
