#include "main.h"

/**
 * set_bit - will set bit in a given space
 * @n: is the n number
 * @index: is the index at which a number is put
 * Return: will return result
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
