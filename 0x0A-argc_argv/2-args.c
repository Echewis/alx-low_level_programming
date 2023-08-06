#include <stdio.h>
#include "main.h"
/**
 * main - is main function
 * @argv: is the vector
 * @argc: is the count
 * @x: is the unknown value
 *
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int x;
	(void) argc;

	for (x = 1; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
