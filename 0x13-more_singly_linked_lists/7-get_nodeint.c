#include "lists.h"

/**
 * get_nodeint_at_index - function that finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find
 * Return: depends on conditions
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t n;

for (n = 0; (n < index) && (head->next); n++)
head = head->next;

if (n < index)
return (NULL);

return (head);
}
