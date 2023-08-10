#include <stdio.h>
#include <stdlib.h>

/**
 * cant - is the function
 * @str: is the string
 * @a: is the unknown number
 */
void cant(char *str, int a)
{
	int b;

	for (a = 0; a < b; a++)
	str[b] = '0';
	str[a] = '\0';
}

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
	int d = 98;

	if (argc != 3)
	{
		printf("%d", d);
		return (1);
	}

	printf("%d\n", num1 * num2);
	return (0);
}
