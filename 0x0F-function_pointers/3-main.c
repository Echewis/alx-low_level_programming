#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - is the main function
 * @argc: is the argument  count
 * @argv: is the agrument vector
 * Return: can return different outputs
 */
int main(int __attribute__((__unused__)) argc, char *argv)
{
	int num1;
	int num2;
	char *operate;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
		operate = argv[2];
	num2 = atio(argv[3]);

	if (get_op_func(operate) == NULL || operate[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operate == '/' && num2 == 0) || (operate == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operate)(num1, num2));
	return (0);
}
