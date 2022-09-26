#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to search for
 * Return: pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *hayptr, *ndlptr;

	while (*haystack != 0)
	{
		hayptr = haystack;
		ndlptr = needle;

		if (*ndlptr == 0)
			return (haystack);

		while (*hayptr != 0)
		{
			if (*hayptr != *ndlptr)
				break;
			hayptr++;
			ndlptr++;

			if (*ndlptr == 0)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
