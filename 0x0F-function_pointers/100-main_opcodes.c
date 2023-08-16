#include <stdio.h>
#include <stdlib.h>


/**
 * main - is a function
 * @argc: counts the argument
 * @argv: lists the argument
 * Return: will return some value at the end
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%0hhx\n", arr[a]);
			break;
		}
		printf("%02hhx", arr[a]);
	}
	return (0);
}
