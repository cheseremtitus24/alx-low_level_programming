#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of dllist
 * @head: double pointer to head of dllist
 * @n: value to be inserted into dllist
 * Return: pointer to node else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}

