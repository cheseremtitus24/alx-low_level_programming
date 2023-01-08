#include "hash_tables.h"
/**
 * hash_table_print- prints all key:value pairs in a hash table
 * @ht: hashtable to prints key value pairs from
 *
 * Return: always void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_node;
	unsigned long int i, first_comma;
	char *key, *value;

	if (!ht)
		return;
	first_comma = 1;
	temp_node = malloc(sizeof(hash_node_t));
	if (temp_node == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp_node = ht->array[i];
			while (temp_node)
			{
				if (temp_node->key)
				{
					if (first_comma == 0)
						printf(",");
					value = temp_node->value;
					key = temp_node->key;
					printf("'%s': '%s'", key, value);
					if (first_comma)
						first_comma = 0;
				}
				temp_node = temp_node->next;
			}
		}
		else
		{
			continue;
		}
	}
	printf("}\n");
	free(temp_node);
}

