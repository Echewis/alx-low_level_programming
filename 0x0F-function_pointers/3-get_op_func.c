#include <stdlib.h>
#include "3-calc.h"


/**
 * get_op_func - is an array
 * @s: is a pointer
 * Return: will return some value
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops = {
		{"+", op_add}, {"-", op_sub}
		{"/", op_div}, {"*", op_mul}
		{"%", op_mod}, {NULL, NULL}
	};

	int a;

	a = 0;

	while (ops[a].operate != NULL &&
		*(ops[a].operate != *s) a++;
		return (ops[a].f);
}
