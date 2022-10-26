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
	listint_t *prev, *tmp;
	unsigned int counter;

	/* Initialize counter to zero */
	counter = 0;
	

	tmp = (*head);
	while (tmp != NULL && counter <= index)/*handle if list is not empty*/
	{
		/*traverse to last element scanning for sought after index*/

		{
			if (counter == index)
			{
				prev->next = tmp->next;
				return (1);
			}
			counter++;
			prev = tmp;
			*head = tmp->next;
		}
	}
	/* if list is empty add new item at the end */
	return (-1);
}
