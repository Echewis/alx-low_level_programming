#include "main.h"

int _sqrt_helper(int n, int a);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 *
 * Return: natural square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion.
 * @n: integer.
 * @a: integer.
 *
 * Return: natural square root of n.
 */
int _sqrt_helper(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, a + 1));
	}
}
