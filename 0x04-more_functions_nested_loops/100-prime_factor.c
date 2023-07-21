#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int a, l = 612852475143;

	for (a = 3; a < 782849; a++)
	{
		while ((l % a == 0) && (l != a))
			l = l / a;
	}
	printf("%lu\n", l);
	return (0);
}
