#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: integer matrix
 * @size: square size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int n = 0, sum = 0;
	int *ptr = a;

	for (n = size; n > 0; n--)
	{
		sum += *ptr;
		ptr += size + 1;
	}
	printf("%d, ", sum);
	sum = 0;
	ptr = a + size - 1;

	for (n = size; n > 0; n--)
	{
		sum += *ptr;
		ptr += size - 1;
	}
	printf("%d\n", sum);
}
