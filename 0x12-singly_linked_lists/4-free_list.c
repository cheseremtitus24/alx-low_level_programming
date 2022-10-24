#include "lists.h"

/**
 * free_list- free dynamically allocated memory of a list node elements
 * @head: pointer to head of a Linked List
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
