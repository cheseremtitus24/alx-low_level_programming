#include "lists.h"

/**
 * free_listint2- free dynamically allocated memory of a list node elements
 * @head: pointer to head of a Linked List
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;

}
