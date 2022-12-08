#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at the specified index
 * @head: pointer to head of dllist
 * @index: specific index to retrieve a node
 * Return: pointer to node else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
