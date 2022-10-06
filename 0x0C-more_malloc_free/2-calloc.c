#include "main.h"
/**
 * _calloc- Creates a void array in heap
 * @nmemb: unit size in bytes of variable type
 * @size: number of same time to allocate space
 *
 * Description- Creates a void array that is zero initialized
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dynmemptr;
	unsigned int totalsize, i;
	char initializer = '\0';

	/* when nmemb or size is 0 return NULL*/
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	/* create memory store in heap*/
	totalsize = nmemb * size;
	dynmemptr = malloc(totalsize);
	/* Check that memory allocation was a success*/
	if (dynmemptr == NULL)
		return (NULL);

	/* initialize allocated memory with zeros*/
	for (i = 0; i < totalsize; i++)
		dynmemptr[i] = initializer;

	return (dynmemptr);
}
