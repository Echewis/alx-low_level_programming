#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - is the main function
 * @argv: is the argument vector
 * @argc: is for argument count
 * Return: will return o in this case
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Try again\n");
		return (1);
	}
	printf("%d\n", num1 * num2);
	return (0);
}
