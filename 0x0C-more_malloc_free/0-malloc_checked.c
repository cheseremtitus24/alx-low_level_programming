#include "main.h"
/**
 * malloc_checked- returns a pointer to a void memory block in heap
 * @b: memory size in bytes to be dynamically allocated
 *
 * Description- Dynamically allocates memory in heap
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *dynmemptr;

	if (b <= 0)
		exit(98);
	dynmemptr = malloc(b);
	if (dynmemptr == NULL)
		exit(98);
	return (dynmemptr);
}
