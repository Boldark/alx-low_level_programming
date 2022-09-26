#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to set
 * @to: pointer to set the pointer to
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
