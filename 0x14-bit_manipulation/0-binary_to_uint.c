#include "main.h"

/**
 * binary_to_uint - will convert number to a unit
 * @b: is the the string pointer to the string
 * Return: will return the output
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int output = 0;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] == '0')
			output = output << 1;
		else if (b[a] == '1')
			output = (output << 1) | 1;
		else
			return (0);
	}
	return (output);
}
