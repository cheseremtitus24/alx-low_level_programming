#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end- adds nodes to end of linked list
 * @head: a pointer to a linked list head
 * @n: initializer node element string
 * Description: Attaches nodes to the end of Linked list
 * and initializes the len of list to the length of the string
 *
 * Return: address of new  nodes else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lptr;

	/*assign values to the a new node */
	new = malloc(sizeof(listint_t));
	/**
	 * check to ensure that malloc allocation of memory is
	 * successful
	 */
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	lptr = *head;
	if (lptr != NULL)/*handle if list is not empty*/
	{
		/*traverse to last element*/
		while (lptr->next != NULL)
		{
			lptr = lptr->next;
		}
		/* assign our new item at end of list*/
		lptr->next = new;
	}
	/* if list is empty add new item at the end */
	else
		*head = new;
	return (*head);
}
