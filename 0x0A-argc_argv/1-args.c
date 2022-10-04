#include <stdio.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: array of listed command
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
