#include "main.h"

/**
 * swap_int - function that swaps h value of 2 integers
 * @a: first integer value to be swapped
 * @b: second integer value to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
