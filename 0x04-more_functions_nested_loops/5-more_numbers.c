#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line.
 */

void more_numbers(void)
{
	int g, h;

	for (g = 0; g < 10; g++)

	{
		for (h = 0; h <= 14; h++)
		{
		if (h > 9)
		{
		_putchar((h / 10) + '0');
		}
		_putchar((h % 10) + '0');
		}
		_putchar('\n');
	}
}
