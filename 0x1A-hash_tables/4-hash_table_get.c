#include "hash_tables.h"
/**
 * hash_table_get- traverses a linked list to retrieve key,value pair values
 * @ht: hash table to search for key,value pair
 * @key: Hash item key to be hashed so as to get hash_table store index
 *
 * Return: returns a char* pointer else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashmap_index;
	hash_node_t *temp_node;
	char *value;

	/* key cannot be an empty string */
	if (strlen(key) < 1 || !key)
		return (0);
	hashmap_index = key_index((const unsigned char *) key, ht->size);

	/* check if the index is null means no such key-pair can be found */
	if (ht->array[hashmap_index] == NULL)
	{
		return (NULL);
	}
	/* the key is likely to be available there we must traverse the linked list*/
	else
	{
		/*traverse the linked list matching the keys in order to retrieve the value*/
		/*set the temp_node to point to the current head*/
		temp_node = malloc(sizeof(hash_node_t));
		/*check if memory allocation was successful */
		if (temp_node == NULL)
		{
			/* add value to the array */
			return (0);
		}
		temp_node = ht->array[hashmap_index];
		while (temp_node)
		{
			if (temp_node->key && (strcmp(temp_node->key, key) == 0))
			{
				value = temp_node->value;
				/*update found flag*/
				free(temp_node);
				return (value);
			}
			temp_node = temp_node->next;
		}
		return (NULL);
	}
}
