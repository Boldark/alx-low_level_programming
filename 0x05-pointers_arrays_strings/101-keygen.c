#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, password, len;

	srand((unsigned int)time(NULL));
	printf("Enter Password\n");
	scanf("%d", &len);

	if (len >= 5)
	{
		for (i = 0; i < len; i++)
		{
			int k = rand() % 128;

			if ((k >= 48 && k <= 57) || (k >= 65 && k <= 90) || (k >= 97 && k <= 122) || (k >= 35 && k <= 37) || (k == 64))
			{
				printf("%d", k);
			}
			else
			{
				i--;
			}
		}
		printf("\n");
	}

	return (0);
}
