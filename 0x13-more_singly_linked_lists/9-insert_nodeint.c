#include <stdlib.h>
#include "lists.h"
#include  <stdio.h>
/**
 * insert_nodeint_at_index- inserts a node in-between nodes in a linked list
 * @head: a pointer to a linked list head
 * @idx: node index to insert the new node
 * @n: integer value to assign to a node element
 *
 * Description:Scans through a linked list and inserts a new node at this index
 *
 * Return: address of new referenced nodes else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *lptr, *new, *prev;
	unsigned int counter, size;

	counter = 0;
	size = (int) getListSize(*head);
	if (!*head || !head)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	else if ((int)idx == (int)size)
	{
		*head = add_nodeint_end(head, n);
		return (*head);
	}
	lptr = (*head);
	while (lptr != NULL && counter <= idx)
	{
		if (counter == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			prev->next = new;
			new->next = lptr;
			return (*head);
		}
		counter++;
		prev = lptr;
		lptr = lptr->next;
	}
	return (NULL);
}


/**
 * getlistsize- gets number of nodes
 * making a list
 * @head: a pointer to a linked list head
 *
 * Return: a positive integer else 0
 */
unsigned int getListSize(listint_t *head)
{
	unsigned int size = 0;

	while (head)
	{
		head = head->next;
		size++;
	}

	return (size);
}
