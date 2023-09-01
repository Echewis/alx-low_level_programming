#include "main.h"

/**
 * clear_bit - is the prototype name
 * @n: is the nth number
 * @index: is the index at which the number will be
 * Return: will return positive
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	return (-1);

	*n &= ~(1UL << index);
	return (1);
}
