#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 */

void print_line(int n)
{
	int u;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (u = 0; u < n; u++)
	{
		_putchar('_');
	}

	_putchar('\n');

}
