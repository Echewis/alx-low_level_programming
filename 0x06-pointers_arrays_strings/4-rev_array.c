#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements in @a.
 *
 * Return: Nothing.
 */

void reverse_array(int *a, int n)
{
	int l = 0;
	int m = n - 1;

	while (l < m)
	{
		int wem = a[l];

		a[l] = a[m];
		a[m] = wem;
		l++;
		m--;
	}
}
