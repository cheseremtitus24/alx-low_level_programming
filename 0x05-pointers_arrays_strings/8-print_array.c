#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_array - prints items in an array
 * @a: input array
 * @n: number of array elements to print out
 *
 * Description- Prints specified item number of elements of an array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		exit(0);
	}

	/*1 place less for the '\0' string char*/
	for (i = 0; i < n; i++)
	{
		/*to convert a number to ascii equivalent add (integer+'0')*/
		/*_putchar(*(a + i) + '0');*/
		if (i == (n - 1))
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
		/*_putchar(',');*/
		/*_putchar(' ');*/

	}
}
