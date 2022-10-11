#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog- assigns struct members values
 * @d: structure pointer
 * Description- Frees dynamically allocated memory from passed in structure
 * Returns- void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
