#include "3-calc.h"

int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_add(int a, int b);

/**
 * op_add - is a function
 * @a: first argument
 * @b: second argument
 * Return: will return result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - is a function
 * @a: first argument
 * @b: second argument
 * Return: will return result
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - is a function
 * @a: first argument
 * @b: second argument
 * Return: will return result
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - is a function
 * @a: first argument
 * @b: second argument
 * Return: will return result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - is a function
 * @a: first argument
 * @b: second argument
 * Return: will return result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
