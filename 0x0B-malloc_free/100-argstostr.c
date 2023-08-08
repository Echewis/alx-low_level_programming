#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - is for concatination of strings
 * @ac: is the first string
 * @av: is the second string
 * Return: always return str in this case
 */

char *argstostr(int ac, char **av)
{
	int a, b, can = 0, v;
	char *str, *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		b = 0;

		while (s[b++])
			can++;
	}
	str = (char *) malloc(sizeof(char) * (can + 1));

	if (str == NULL)
		return (NULL);

	for (a = 0, b = 0; a < ac && b < can; a++)
	{
		s = av[a];
		v = 0;

		while (s[v])
		{
			str[b] = s[v];
			v++;
			b++;
		}
		str[b++] = '\n';
	}
	str[b] = '\0';
	return (str);
}
