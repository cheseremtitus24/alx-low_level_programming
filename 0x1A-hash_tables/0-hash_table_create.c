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
	if (size < 1)
		return (NULL);

	/* Create a hash table */
	hash_table_t *new_hashmap = malloc(size * sizeof(hash_table_t));

	/* Verify that the new hash memory location was successful*/
	if (new_hashmap == NULL)
	{
		/* Memory location failed thus return NULL*/
		return (NULL);
	}
	/* Initialize the table entries with NULL*/
	memset(new_hashmap, 0, sizeof(hash_table_t) * size);

	return (new_hashmap);

}
