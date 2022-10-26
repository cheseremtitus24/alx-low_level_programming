#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint- sums all node element values
 * @head: a pointer to a linked list head
 *
 * Description: Sums node element values
 *
 * Return: positive integer value else 0
 */
int sum_listint(listint_t *head)
{
	listint_t *lptr;
	int sum;

	sum = 0;

	lptr = head;
	if (lptr != NULL)/*handle if list is not empty*/
	{
		/*traverse to last element*/
		while (lptr->next != NULL)
		{
			sum += lptr->n;
			lptr = lptr->next;
		}
			sum += lptr->n;
	}
	/* if list is empty add new item at the end */

	return (sum);
}
