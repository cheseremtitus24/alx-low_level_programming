#include "lists.h"

/**
 * print_dlistint - outputs doubly linked list data value
 * @h: pointer to head of list
 * Return: a count of the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes += 1;
	}

	return (num_nodes);
}
