#include "main.h"

/**
 * print_binary - print binary
 * @n: nth value
 * Return: will return positive
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int);
	unsigned long int ink = 1UL <<   (size - 1);

	int i;

	for (i = 0; i < size; i++)
	{
		putchar((n & ink) ? 'l' : '0');
		ink >>= 1;
	}
}
