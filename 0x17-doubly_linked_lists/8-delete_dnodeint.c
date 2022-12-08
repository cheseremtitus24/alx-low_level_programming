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

/**
 * delete_dnodeint_at_index- deletes dllist node at a specified position/index
 * @head: double pointer to head of a dllist
 * @index: position index where to delete dllist node
 * Return: 1 on success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temp) < index + 1)
		return (-1);
	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
