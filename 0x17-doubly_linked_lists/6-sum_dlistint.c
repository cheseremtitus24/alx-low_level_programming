#include "lists.h"

/**
 * sum_dlistint- sums all data values of nodes in a DLList
 * @head: pointer to head of dllist
 * Return: positive integer else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (result);
}
