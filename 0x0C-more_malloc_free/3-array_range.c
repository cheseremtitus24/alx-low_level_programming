#include "main.h"
/**
 * array_range- Creates an initialized integer array in heap
 * @min: Start Integer Inclusive
 * @max: End Integer Inclusive
 *
 * Description- Creates an integer array that is integer initialized
 *
 * Return: integer pointer
 */
int *array_range(int min, int max)
{
	int *dynmemptr;
	int totalsize, i;
	int initializer;

	/* when nmemb or size is 0 return NULL*/
	if (min > max)
		return (NULL);

	/* initiliaze start integer to min*/
	initializer = min;

	/* create memory store in heap*/
	totalsize = max - min;
	dynmemptr = malloc(sizeof(dynmemptr) * (totalsize + 1));

	/* Check that memory allocation was a success*/
	if (dynmemptr == NULL)
		return (NULL);

	/* initialize allocated memory with zeros*/
	for (i = 0; initializer <= max; i++)
		dynmemptr[i] = initializer++;

	return (dynmemptr);
}
