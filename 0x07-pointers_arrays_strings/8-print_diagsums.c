#include "main.h"
/**
 * print_diagsums - sum up the diagonals of a square matrix
 * @a: input string
 * @size: order of the matrix
 *
 * Description- Prints the sum of diagonals of a matrix
 * Return: string pointer
 */

void print_diagsums(int *a, int size)
{
	int i, j, size;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i + j == n - 1)
			{
				sum = sum + a[i][j];
			}
		}
	}
	print_number(sum);
}


/**
 * print_number - Prints an integer using recursion
 * @n: Integer to print
 * Return - void
 */

void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		temp = -n;
		_putchar('-');
	}
	else
	{
		temp = n;
	}
	if (temp / 10) /* Captures the first digit */
	{
		print_number(temp / 10);
		/* Recursively call function to print e.g 1024 - 102 - 10 - 1*/
	}
	_putchar((temp % 10) + '0');
	/* grabs the first digit of a number */

