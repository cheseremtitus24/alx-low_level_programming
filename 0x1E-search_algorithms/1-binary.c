#include "search_algos.h"
/**
 * binary_search- Searches through an array element
 * while splitting the array in half.
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
int binary_search(int *array, size_t size, int value)
{
	int m;
	size_t L = 0;
	size_t R = size - 1;
	int unsuccessful = -1;

	if (array == NULL)
		return (unsuccessful);

	print(array, 0, size - 1);
	while (L <= R)
	{
		/* floor the result*/
		m = (L + R) / 2;

		if (array[m] < value)
		{
			L = m + 1;
			print(array, L, R);
		}
		else if (array[m] > value)
		{
			R = m - 1;
			print(array, L, R);
		}
		else
			return (m);
	}

	return (unsuccessful);
}

/**
 * print- prints array elements starting from a specific index
 * @array: array to print elements from
 * @current_index: starting index to print elements
 * @size: size of the array
 * Return: void
 */
void print(int *array, int current_index, size_t size)
{
	size_t i;
	size_t counter;

	/* handles the fencing post algorithm*/
	counter	= 0;

	printf("Searching in array:");
	for (i = current_index; i <= size; i++)
	{
		if (counter == 0)
		{
			printf("%d", array[i]);
			counter++;
		}
		else
		{
			printf(", %d", array[i]);

		}
	}
	printf("\n");

}
