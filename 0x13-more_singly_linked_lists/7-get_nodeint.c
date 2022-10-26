#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index- returns the nth node of a linked list
 * @head: a pointer to a linked list head
 * @index: node index to be retrieved
 *
 * Description: Scans through a linked list and retrives the specified index'd node
 *
 * Return: address of new referenced nodes else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *lptr;
	unsigned int counter;

	/* Initialize counter to zero */
	counter = 0;

	lptr = head;
	while (lptr != NULL && counter <= index)/*handle if list is not empty*/
	{
		/*traverse to last element*/


		{
			if (counter == index)
				return (lptr);
			counter++;
			lptr = lptr->next;
		}
	}
	/* if list is empty add new item at the end */
	return (NULL);
}
