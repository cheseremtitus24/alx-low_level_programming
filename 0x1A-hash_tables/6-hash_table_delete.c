#include "hash_tables.h"
/**
 * hash_table_delete- Deletes hash elements and frees heap memory
 * @ht: hashtable to delete key value pairs from
 *
 * Return: always void
 */
void hash_table_delete(const hash_table_t *ht)
{
	hash_node_t *temp_node;
	unsigned long int i;

	if (!ht)
		return;
	temp_node = malloc(sizeof(hash_node_t));
	if (temp_node == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp_node = ht->array[i];
			while (temp_node)
			{
				if (temp_node->key)
				{
					free(temp_node->value);
					free(temp_node->key);
				}
				temp_node = temp_node->next;
			}
		}
		else
		{
			continue;
		}
	}
	free(temp_node);
}

