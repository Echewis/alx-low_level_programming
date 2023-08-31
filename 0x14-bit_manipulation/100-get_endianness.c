#include "main.h"

/**
 * get_endianness - endiness of a machine
 * Return: will return 1 or 0;
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *)&s;

	if (*c)
		return (1);
	else
		return (0);
}
