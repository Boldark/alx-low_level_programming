#include <stdio.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: array of listed command
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
