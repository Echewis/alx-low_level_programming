#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int a, b;
	char letters[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (a = 0; str[a]; a++)
	{
		for (a = 0; letters[b]; b++)
		if (str[a] == letters[b])
		{
		str[a] = numbers[b];
		break;
		}
	}
	return (str);
}
