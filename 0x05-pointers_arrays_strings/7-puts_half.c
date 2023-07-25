#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int dan = 0;
	int d;

	while (str[dan] != '\0')
	{
		dan++;
	}
	if (dan % 2 == 0)
	{
		d == dan / 2;
	}
	else
	{
		d = (dan - 1) / 2;
		d++;
	}
	while (str[d] != '\0')
	{
		_putchar(str[d]);
		d++;
	}
	_putchar('\n');
}
