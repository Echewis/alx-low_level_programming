#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - is the main function
 * @argc: is the argument  count
 * @argv: is the agrument vector
 * Return: can return different outputs
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int n;
	int result;

	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
		op = get_op_func(argv[2]);
	num2 = atoi(argv[3]);
	n = *argv[2];

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((n == '/' || n == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op(num1, num2);
	printf("%d\n", result);
	return (0);
}
