#include "main.h"

int is_prime_helper(int n, int a);
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: integer.
 *
 * Return: 1 if n is prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}


/**
 * is_prime_helper - helper function for is_prime_number.
 * @n: integer.
 * @a: integer.
 *
 * Return: 1 if n is prime number, otherwise return 0.
 */

int is_prime_helper(int n, int a)
{
	if (a == n)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, a + 1));
	}
}
