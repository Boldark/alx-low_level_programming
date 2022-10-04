#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory location to start at
 * @b: character to write the memory
 * @n: number of bytes to write
 * Return: ponter to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}
