#include "main.h"
/**
 * print - print alphabet
 *
 */
void print_alphabet(void)
{
	char man;

	man = 'a';
	for (man = 'a'; man <= 'z'; man++)
	{
		_putchar(man);
	}
	_putchar('\n');
}
