#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @s: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int s)
{
	int l;

	l = s % 10;
	if (l < 0)
	{
	_putchar(-l + 48);
	return (-l);
	}
	else
	{
	_putchar(l + 48);
	return (l);
	}
}
