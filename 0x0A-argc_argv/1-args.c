#include <stdio.h>
#include "main.h"
/**
 * main - prints the fuction
 * @argc: argument count
 * @argv: argument vector
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	(void) *argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
