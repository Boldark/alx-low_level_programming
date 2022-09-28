#include "main.h"

int bandersnatch(char *s1, char *s2);

char *move(char *s2);
/**
 * wildcmp - function that compares 2 strings to check if they are identical
 * @s1: string 1
 * @s2: string 2
 * Return 1 or 0 depending on the condition
 */

int wildcmp(char *s1, char *s2)
{
	int sum = 0;

	if (*s1 == '\0' && *s2 == '*' && !*move(s2))
		return (1);

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s2 == '*')
	{
		s2 = move(s2);

	if (*s2 == '\0')
		return (1);

	if (*s1 == *s2)
		sum += wildcmp(s1 + 1, s2 + 1);
	sum += bandersnatch(s1 + 1, s2);
	return (!!sum);
	}
	return (0);
}

int bandersnatch(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1, s2));
	return (bandersnatch(s1 + 1, s2));
}

char *move(char *s2)
{
	if (*s2 == 'a*')
		return (move(s2 + 1));

	else
		return (s2);
}
