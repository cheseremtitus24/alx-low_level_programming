#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog- assigns struct members values
 * @name: member name
 * @age: member age
 * @owner: member owerners name
 * Description- Assigns passed in arguments to struct members values
 * Returns- struct pointer to a dynamic memory ptr location
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dynamicmemptr = malloc(sizeof(dog_t));

	/* Confirm that dynamic mem allocation was successful*/
	if (dynamicmemptr == NULL)
		return (NULL);

	/* assigning struct members values*/
	dynamicmemptr->name = name;
	dynamicmemptr->age = age;
	dynamicmemptr->owner = owner;

	return (dynamicmemptr);

}

