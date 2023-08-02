#include "main.h"
#include <stdio.h>

int _palindrome_helper(char *s, int len, int a);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to string.
 *
 * Return: 1 if s is palindrome, otherwise return 0.
 */
int is_palindrome(char *s)
{

	if (len <= 1)
	{
		return (1);
	}
	return (_palindrome_helper(s, len, 0));
}
/**
 * _palindrome_helper - helper function for is_palindrome.
 * @s: pointer to string.
 * @len: integer.
 * @a: integer.
 *
 * Return: 1 if s is palindrome, otherwise return 0.
 */
int _palindrome_helper(char *s, int len, int a)
{
	if (a >= len / 2)
	{
		return (1);
	}
	else if (s[a] != s[len - a - 1])
	{
		return (0);
	}
	else
	{
		return (_palindrome_helper(s, len, a + 1));
	}
}
