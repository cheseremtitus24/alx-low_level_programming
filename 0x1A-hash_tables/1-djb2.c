#include "hash_tables.h"
/**
 * hash_djb2- Almost Perfect Hashing function
 * @str: string/key to be hashed to generate a hashmap index
 *
 * Description:
 *
 * The function computes the hash of an input string
 * and generates an index that maps onto hash table index
 *
 * Return: a hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
		/* hash * 33 + c */
	}
	return (hash);
}
