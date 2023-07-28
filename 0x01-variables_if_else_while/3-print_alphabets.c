#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;
	int A;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
	putchar(A);
	}
	putchar('\n');
	return (0);
}
