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
	listint_t *new;
	int num;

	if (head == NULL)
	{
		free(head);
		exit(0);
	}

	num = (*head)->n;
	/*_print_number(*head->n);*/
	/*_putchar('\n');*/

	new = ((*head)->next);
	free(*head);
	*head = new;

	return (num);
}
