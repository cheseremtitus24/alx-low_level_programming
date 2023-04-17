#include "search_algos.h"
/**
 * linear_search- Searches through an array element
 * by element until and return the first matching value
 * element
 *
 * @array: Array to be scanned through linearly
 * @size: total Size of the array.
 * @value: Value to be searched for in the array
 *
 * Description: search for 3 in the following array
 * array[1,2,3,4] -> 3 is at index 2
 *
 * Return: returns and -1 if not found else returns
 * a number > -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Verify that the array is not NULL*/
	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/* provide stdout status*/
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
