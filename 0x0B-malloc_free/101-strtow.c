#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * strtow - function that splits
 * @str: The link to strings
 * Return: in this case will return words
 */

char **strtow(char *str)
{
	char **words;
	char *split = strtok(str, " ");

	int count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (split != NULL)
	{
		words = realloc(words, sizeof(char *) * (count + 1));
		count++;
		split = strtok(str, " ");

	}
	return (words);
}
