#include "main.h"
/**
 * swap_int - helps to swaps the values ot two integers
 *
 * @a: integer to be swaped
 *
 * @b: integer to be swaped
 */

void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
