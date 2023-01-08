#include "hash_tables.h"
#include <stdio.h>


/**
 * hash_table_set - inserts key, value pairs in a hashmap
 * @ht: pointer to hash_table
 * @key: key to be hashed to get hashtable index
 * @value: key's value
 *
 * Return: 1 on success else 0
 */
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashmap_index;
	hash_node_t *temp_node;

	/* key cannot be an empty string */
	if (strlen(key) < 1 || !key)
		return (0);
	hashmap_index = key_index((const unsigned char *) key, ht->size);
	temp_node = malloc(sizeof(hash_node_t));
	/*check if memory allocation was successful */
	if (temp_node == NULL)
	{
		/* add value to the array */
		return (0);
	}
	/* assign values to our hash_node_t item */
	temp_node->value = strdup(value);
	temp_node->key = strdup(key);
	temp_node->next = NULL;
	/* check if the index is null if so just append hash item */
	if (ht->array[hashmap_index] == NULL)
	{
		ht->array[hashmap_index] = temp_node;
	}
	/* Collision Encountered */
	else
	{
		/* if the index is occupied just insert at beginning of linked_list */
		/* create a temporary linked list node */
		temp_node = malloc(sizeof(hash_node_t));
		if (!temp_node)
			return (0);
		temp_node->key = strdup(key);
		temp_node->value = strdup(value);
		/* sets current as the new Linked_list head */
		temp_node->next = ht->array[hashmap_index];
		/* set temp as the new head */
		ht->array[hashmap_index] = temp_node;
		free(temp_node);
	}
	return (1);
}
