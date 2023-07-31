#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the square matrix.
 * @size: size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int b;
	int num1;
	int num2;

	for (b = 0; b < size; b++)
	{
		num1 += *(a + b * size + b);
		num2 += *(a + b * size + (size - b - 1));
		printf("%d, %d\n", num1, num2);
	}
}
