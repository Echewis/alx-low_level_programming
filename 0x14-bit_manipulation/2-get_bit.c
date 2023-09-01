#include "main.h"

/**
 * get_bit - will get the bit
 * @n: is the n number
 * @index: is the index of the number
 * Return:- will return index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	return ((n >> index) & 1);
}
