#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint- deletes and displays head nodes of a linked list
 * @head: a pointer to a linked list head
 * Description: outputs head node element values before deleting it
 *
 * Return: address of new  nodes else NULL
 */
int pop_listint(listint_t **head)
{
	/* handle underflow */
	int sum;
	listint_t *temp;

	if (*head == NULL || !head)
		return (0);


	/* save the value of head node to variable*/
	sum = (*head)->n;
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;

	}
	else
	{
		temp = (*head)->next;
		/*set *head next pointer to null*/
		(*head)->next = NULL;
		/*free the head*/
		free(*head);
		/*set temp as the new head*/
		*head = temp;

	}


	return (sum);


}
