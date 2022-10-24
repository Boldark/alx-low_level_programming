#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that calculates the sum of data(n) of a linked list
 * @head : pointer to the head of the list
 * Return: sum of n or 0 depending on conditions
 */

int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
