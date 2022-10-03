#include "main.h"
/**
 * create_array- returns a array pointer of specified size
 * @size: array size to be allocated in heap memory
 * @c: Character to initialize the created array with
 *
 * Description- Dynamically allocates memory in heap and initializes
 * the space with specified character.
 *
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *dynmemptr = (char *) malloc(sizeof(char) *  size);

	if (dynmemptr == NULL)
		return (NULL);

	for (i = 0; i < (int)(sizeof(char) * size) ; i++)
		dynmemptr[i] = c;

	return (dynmemptr);

}
