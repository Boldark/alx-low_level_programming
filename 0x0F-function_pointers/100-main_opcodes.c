#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of arguments
 * @argc: arguments containing number of bytes
 * Return: 0 (succes) 1 (error)
 */

int main(int argc, char *argv[])
{
	int n;
	char *fn;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		return (2);
	}
	fn = (char *)main;
	for (; n > 0; n--, fn++)
	{
		printf("%02x", *fn & 0xff);
		if (n != 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
