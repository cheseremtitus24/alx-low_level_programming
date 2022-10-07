#include "main.h"
/**
 * _realloc - dynamically increases the size of a ptr to a heap
 * @ptr: heap memory to increase memory allocation
 * @old_size: total size of allocated memory that is pointed to by ptr
 * @new_size: new enlarged size
 *
 * Description: Copied contents of a small heap to a larger heap size allocated
 *
 * Return: void pointer else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dynmemptr;
	char *promotevoid2char;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	/* create a new memory block */
	dynmemptr = malloc(new_size);

	if (dynmemptr == NULL)
		return (ptr);
	/* copy contents of ptr to current ptr*/
	promotevoid2char = ptr;
	for (i = 0; i < old_size; i++)
	{
		dynmemptr[i] = promotevoid2char[i];
	}

	free(ptr);

	return (dynmemptr);

}
