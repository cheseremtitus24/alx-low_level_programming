#include "main.h"
#include <stdlib.h>
/**
 * reverse_array- Reverses an array between
 * starting and specified index
 * @a: array to be reversed
 * @n: array slice index to reverse
 *
 * Description- reverses an array based on provided index
 * Example:
 * int arr[5] = {1,2,3,4,5};
 * reverse_array(arr, 3) -> {3,2,1,4,5}
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	if (n <= 0)
	{
		return;
	}

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}

