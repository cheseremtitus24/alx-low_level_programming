#include "lists.h"

/**
 * free_dlistint - frees heap memory allocated to dllist nodes
 * @head: pointer to head of dllist
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
