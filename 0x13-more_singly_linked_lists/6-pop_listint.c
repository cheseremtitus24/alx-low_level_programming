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

	if (*head == NULL)
		return (0);

	temp = malloc(sizeof(listint_t));


	/* save the current header's result to sum variable*/
	sum = (*head)->n;
	temp = (*head)->next;
	(*head)->next = NULL;
	free(*head);
	*head = temp;
	return (sum);


}
