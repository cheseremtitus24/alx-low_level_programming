#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog- Ouputs struct member values
 * @d: structure pointer
 *
 * Description- ouputs (null) when member value is NULL and nothing if
 * structure pointer is NULL
 *
 * Returns: void
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		/* printing nothing*/
		return;
	}
	else
	{
		/* printing struct member values*/
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}

}

