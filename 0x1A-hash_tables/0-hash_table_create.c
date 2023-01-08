#include "hash_tables.h"

/**
 * hash_table_create - This function allocates heap memory for a new hash table
 * @size: Defines the size of the hash map/table
 *
 * Description:
 *
 * Function creates a hash table by allocating heap memory
 * space and returning a pointer to the allocated space
 *
 * Example:
 *
 * Holds a total of 20 items
 * int array_size = 20;
 * hash_table_t *new_table = hash_table_create(20);
 *
 * Return: a pointer to the heap memory address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashmap;
	unsigned long int i;

	if (size == 0)
		exit(EXIT_FAILURE);

	/* Create a hash table */
	new_hashmap = malloc(sizeof(hash_table_t));

	/* Verify that the new hash memory location was successful*/
	if (new_hashmap == NULL)
	{
		/* Memory location failed thus return NULL*/
		return (NULL);
	}
	new_hashmap->size = size;
	/* Initialize the table entries with NULL*/
	new_hashmap->array = calloc(size, sizeof(hash_node_t));
	if (!new_hashmap->array)
	{
		free(new_hashmap);
		return (NULL);
	}

	for (i = 0; i < new_hashmap->size; i++)
	{
		new_hashmap->array[i] = NULL;
	}

	/* save the size of the hashmap*/


	return (new_hashmap);

}
