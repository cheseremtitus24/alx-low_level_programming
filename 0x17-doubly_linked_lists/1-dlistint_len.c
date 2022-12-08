#include "lists.h"

/**
 * dlistint_len - returns number of nodes in a dlist
 * @h: pointer to head of list
 * Return: a positive integer else 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}

