#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: character to search for
 * Return: pointer to first appearance of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
			return (s);
		ptr++;

		if (*ptr == 0)
		{
			ptr = accept;
			s++;
		}
	}
	return (0);
}
