#include "main.h"

int check_pal(char *s, int i, int len);

int _strlen_recursion(char *s);
/**
 * is_palindrome - function that detects if a string is a palindrome
 * @s: string
 * Return: 1 or 0 depending on the condition
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function that prints length of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function that checks recursively for a palindrome
 * @s: string
 * @i: iterator
 * @len: string length
 * Return: 1 or 0 depending on condition
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
