#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: array of listed command
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
