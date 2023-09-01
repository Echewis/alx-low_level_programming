#include "main.h"

/**
 * flip_bits - a prototype
 * @n: nth number
 * @m: mth number
 * Return: count is returned
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int z = n ^ m;

	while (z)
	{
		count++;
		z &= (z - 1);
	}
	return (count);
}
