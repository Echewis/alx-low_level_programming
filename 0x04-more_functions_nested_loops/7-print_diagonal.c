#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: The number of times the character \ should be printed.
 */

void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');

	}

	else
	{
		int w, x;

	for (w = 0; w < n; w++)
	{


		for (x = 0; x < n; x++)
	{
		if (x == w)

		_putchar('\\');

		else if (x < w)

		_putchar(' ');

	}
		_putchar('\n');

	}

	}
}
