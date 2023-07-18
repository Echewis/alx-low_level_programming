#include "main.h"
/**
 *  * print_alphabet - prints the alphabet in lowercase
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
