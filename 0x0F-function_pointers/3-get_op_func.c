#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - is an array
 * @s: is a pointer
 * Return: will return some value
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, {"-", op_sub},
		{"/", op_div}, {"*", op_mul},
		{"%", op_mod}, {NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op)
	{
	if (strcmp(ops[i].op, s) == 0)

		return (ops[i].f);
	i++;
	}

	return (0);
}
