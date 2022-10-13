#include "function_pointers.h"
/**
 * array_iterator- prints formatted integer values
 * @array: integer array
 * @size: size of integer array
 * @action: pointer to a function
 *
 * Description: prints interger values from an array through a function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);

}

