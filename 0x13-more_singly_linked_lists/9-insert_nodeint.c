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
	listint_t *newNode;
	unsigned int size = getNodeSize(*head);

	newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (idx > size)
		return (NULL);
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		/* temp used to traverse the List*/
		listint_t *temp = *head;

		/* traverse till the nth node*/
		while (--idx)
			temp = temp->next;
		/* assign newNode's next to nth node's next*/
		newNode->next = temp->next;
		/* assign nth node's next this new node*/
		temp->next = newNode;
	}
	return (newNode);
}

/**
 * getNodeSize- Finds the size of a Linked List
 * @head: a pointer to a linked list head
 *
 * Description:Scans through a linked list while incrementing the size value
 *
 * Return: positive integer else 0
 */
unsigned int getNodeSize(listint_t *head)
{
	unsigned int size = 0;

	while (head)
	{
		head = head->next;
		size++;
	}
	return (size);
}
