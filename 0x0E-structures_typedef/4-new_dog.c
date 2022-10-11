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
	/* Keeping a copy of name and owner*/
	dynamicmemptr->name = malloc(sizeof(name));
	dynamicmemptr->owner = malloc(sizeof(owner));
	/* copy original string to the allocated space */
	_strcpy(dynamicmemptr->name, name);
	_strcpy(dynamicmemptr->owner, owner);

	dynamicmemptr->age = age;

	return (dynamicmemptr);

}

/**
 * _strcpy- replicates the contents of an input string
 * @dest: destination string
 * @src: source string
 *
 * Description-Copies contents from source string to dst string
 * and returns pointer to the first element of the dest string
 *
 * Return: character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}

