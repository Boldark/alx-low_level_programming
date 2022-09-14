#include "main.h"

/**
 * main - Entry point
 *
 * _islower -> checks for lowercase characters
 * @c: character argument
 *
 * Return: Always 0 or 1 depending on the outcome
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
