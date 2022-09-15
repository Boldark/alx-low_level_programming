#include "main.h"

/**
 * _isdigit - checks wether a character is a digit or not
 * @c: character to be tested
 * Return: return 1 if condition is met otherwise return 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
