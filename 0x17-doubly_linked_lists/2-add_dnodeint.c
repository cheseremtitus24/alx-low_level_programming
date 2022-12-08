#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of dllist
 *@head: pointer to head of list
 *@n: value to insert to list
 *Return: a pointer to an address else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	/* check if memory allocation was successful*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
};


