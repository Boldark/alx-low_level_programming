#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet -> prints alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
	return (0);
}
