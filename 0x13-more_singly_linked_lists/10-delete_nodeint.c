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
	listint_t *prev, *current;

	/* Initialize counter to zero */
	current = (*head);
	prev = (*head);

	if (!(*head))
		return (-1);
	else if (index == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return(0);
	}
	else
	{
		while (index != 1)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
		return(0);
	}
	

}
