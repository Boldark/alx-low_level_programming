#include "main.h"

/**
 * _strcpy - function that copies a string
 * @dest: destination of the value
 * @src: source of the value
 * Return: destination of the value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
