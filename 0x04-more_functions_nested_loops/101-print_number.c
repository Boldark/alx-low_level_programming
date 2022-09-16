#include <stdio.h>
#include "main.h"

/**
 * print_number - prints number
 * @n: number to be printed
 * Return: nothing
 */

void print_number(int n)
{
	unsigned num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (x > 9)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}