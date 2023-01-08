#include "hash_tables.h"

/**
 * key_index- computes the index of a hash key on the hashmap
 * @key: The input string that should be hashed to generate a table index
 * @size: The hash_map size
 *
 * Description: Function computes key hash and returns an index that is
 * within the range from 0-size
 *
 * Return: an integer value between 0 and (size - 1)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* compute and return the modulus*/
	if (!key)
		return (EXIT_FAILURE);

	hash = hash_djb2(key);

	return (hash % size);
}
