#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assigns a random number to the variable n and prints the last
 * digit of the number.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is %d", n, abs(n % 10));
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
