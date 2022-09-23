#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
 * Write your line of code here...
 * You are not allowed to use a
 * You are not allowed to modify p
 * You can only make one statement
 * You are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* This makes it to prins 98\n */
printf("a[2] = %d\n", a[2]);

return (0);
}
