#include <stdlib.h>
#include "lists.h"
/**
 * list_len- prints a lists length
 * @h: linked list head pointer
 * Description: counter number of nodes available in list
 *
 * Return: number of nodes else 0
 */
size_t list_len(const list_t *h)
{
	int node_counter;

	node_counter = 0;
	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
