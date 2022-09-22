#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: an array
 * @n: element of the array
 */

void reverse_array(int *a, int n)
{
int i = 0;
int aux;

while (i < n--)
{
aux = a[i];
a[i++] = a[n];
a[n] = aux;
}
}
