#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 followed by a new line.
 * Do not print 2 and 4.
 */

void print_most_numbers(void)
{
	int l = 9;

	for (l = 0; l <= 9; l++)

	{
		if (l != 2 && l != 4)
	{
		_putchar(l + '0');
	}

	}
		_putchar('\n');
}
