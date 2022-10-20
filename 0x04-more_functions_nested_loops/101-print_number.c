#include <stdio.h>
#include "main.h"

/**
 * print_number - prints number
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (x > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
