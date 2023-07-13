#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;
	int g;
	long int h;
	long long int i;
	float j;

	printf("Size of a char: %lu  byte(s\n", sizeof(f));
	printf("Size of an int: %lu byte(s)\n", sizeof(g));
	printf("Size of a long int: %lu byte(s)\n", sizeof(h));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(i));
	printf("Size of a float: %lu byte(s)\n", sizeof(j));
	return (0);

}
