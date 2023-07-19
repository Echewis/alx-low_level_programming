#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int a;
	int b;
	int final;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
	{
		final = a * b;

		if (b == 0)
	{
		_putchar('0');
	}
		else
		if (final < 10)
	{
		_putchar(' ');
		_putchar(final + '0');
	}
		else
	{
		_putchar((final / 10) + '0');
		_putchar((final % 10) + '0');
	}

		if (b != 9)
	{
		_putchar(',');
		_putchar(' ');
	}

	}
	_putchar('\n');
	}
}
