#include "main.h"
/**
 *  * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char d;
	int j;

	for (j = 0; j <= 10; j++)
	{
	for (d = 'a'; d <= 'z'; d++)
	{
	_putchar(d);
	}
	_putchar('\n');
	}
}
