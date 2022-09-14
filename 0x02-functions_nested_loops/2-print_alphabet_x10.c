#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabets in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	int x;
	int j;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
