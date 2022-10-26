#include <stdlib.h>
#include "lists.h"
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
	unsigned int counter;

	/* Initialize counter to zero */
	counter = 0;
	
	if (idx == 0)
		return (NULL);


	lptr = (*head);
	while (lptr != NULL && counter <= idx)/*handle if list is not empty*/
	{
		/*traverse to last element scanning for sought after index*/

		{
			if (counter == idx)
			{
				new = malloc(sizeof(listint_t));
				if (!new)
					return (NULL);
				/* Assign Value to new node*/
				new->n = n;
				prev->next = new;
				new->next = lptr;
				return (*head);
			}
			counter++;
			prev = lptr;
			lptr = lptr->next;
		}
	}
	/* if list is empty add new item at the end */
	return (NULL);
}
