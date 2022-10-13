#include "function_pointers.h"
/**
 * int_index- Searches for the index of a number in an array
 * @array: integer array
 * @size: number of elements in array
 * @cmp: pointer to a function that compares values
 *
 * Description: outputs index of an integer
 *
 * Return: an index of the first element for which the cmp function does not
 * return 0 else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result_index = -1;

	if (!array || !cmp)
		return (-1);

	/* invoke function on each and every element in array until condition is met*/

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			/* Result Found @ index i*/
			/* break from loop */
			result_index = i;
			break;
		}
	}
	/* handles case when not element matches */
	return (result_index);

}

