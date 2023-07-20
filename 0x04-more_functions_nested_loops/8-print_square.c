#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y, z;

	for (y = 0; y < size; y++)
	{

		for (z = 0; z < size; z++)
	{
		_putchar('#');

	}
		_putchar('\n');
	}

	}
}
