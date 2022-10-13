#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: parameter numbers
 * @...: other parameters
 * Return: all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (; i < n; i++)
	sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
