#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - is a function
 * @void: will return void
 */
void print_opcodes(void)
{
	char *cmd;
	int nbytes;

	nbytes = asprintf(&cmd, "objdump -d -j .text -M intel % |
	grep -A%d '<print_opcodes>:' | cut - f2", __FILE__, 10000);
		if (nbytes == -1)
		{
			perror("asprintf");
			exit(EXIT_FAILURE);
		}
	system(cmd);
	free(cmd);
}

/**
 * main - is the main function
 * @argv: is the vector
 * @argc: counts the arguments
 * Return: will return exit failure or success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s number_of_bytes\n", argv[0]);
		return (EXIT_FAILURE);
	}
	print_opcodes();
	return (EXIT_SUCCESS);
}
