#include "main.h"
/**
 * main - print _putchar
 *
 * Return: (0)
 *
 */
int main(void)
{
	int a;
	char z[] = "_putchar";

	for (a = 0; a <= 7; a++)
	{
		_putchar(z[a]);
	}
	_putchar('\n');

	return (0);
}
