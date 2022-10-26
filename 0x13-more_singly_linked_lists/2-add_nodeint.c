#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint- adds nodes to beginning of linked list
 * @head: a pointer to a linked list head
 * @n: initializer node element with an integer value
 * Description: Attaches nodes to the beginning of Linked list
 * and initializes the len of list to the length of the string
 *
 * Return: address of new  nodes else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		free(head);
		exit(0);
	}


	/* assign values to the a new node */
	new = malloc(sizeof(listint_t));
	/**
	 * check to ensure that malloc allocation of memory is
	 * successful
	 */
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;


	return (*head);
}
