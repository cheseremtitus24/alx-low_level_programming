#include "dog.h"
#include <stdlib.h>
/**
 * init_dog- sets values to a struct members
 * @ptr: destination string
 * @name: member name
 * @age: member age
 * @owner: member owner
 *
 * Description- Initializes and struct and copies its pointer to passed pointer
 *
 * Returns: void
 */
void init_dog(struct dog *ptr,
char *name, float age, char *owner)
{
	struct dog source;

	if (ptr == NULL)
		ptr = &source;

	else
	{
		source.name = name;
		source.age = age;
		source.owner = owner;

		memcpy(ptr, &source, sizeof(source));
	}

}

