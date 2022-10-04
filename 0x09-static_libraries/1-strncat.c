#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates 2 strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: the string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
