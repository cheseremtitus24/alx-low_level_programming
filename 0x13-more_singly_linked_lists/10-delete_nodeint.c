#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index- delete a node in-between nodes in a linked list
 * @head: a pointer to a linked list head
 * @index: node index to delete
 *
 * Description:Scans through a linked list and deletes a new node at this index
 *
 * Return: address of new referenced nodes else NULL
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head; /* Creating a temporary*/
	listint_t *del;
							/* variable pointing to head*/
	unsigned int listlen, i;

	listlen = getListSize(*head);

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next; /* Advancing the head pointer*/
		temp->next = NULL;
		free(temp); /* Node is deleted*/
		return (1);
	}
	/* Handle deletion of the Linked List's Tail*/
	else if (index >= listlen)
	{
		return (-1);

	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			temp = temp->next;
		}
		/* Now temp pointer points to the previous node of*/
		/* the node to be deleted*/
		del = temp->next; /* del pointer points to the node*/
		/* to be deleted*/
		temp->next = temp->next->next;
		del->next = NULL;
		free(del); /* Node is deleted*/
		return (1);
	}
}
/**
 * getListSize- Captures the Number of nodes in a Linked List
 * @head: linked list head pointer
 * Description: This is required in order to check if deletetion is
 * at an invalid index
 *
 * Return: integer number of nodes else 0
 */
unsigned int getListSize(listint_t *head)
{
	listint_t *temp = head; /* Creating a temporary*/
	unsigned int size = 0;

	while (temp)
	{
		temp = temp->next;
		size++;
	}

	return (size);
}
