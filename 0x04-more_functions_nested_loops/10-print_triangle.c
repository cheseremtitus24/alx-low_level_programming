#include "main.h"
/**
 * print_triangle - prints a triangle
 * @n: number of times to print the triangle
 *
 * Description - prints the left sided diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int l;

	if (n <= 0)
	{
		_putchar('\n');
		exit(0);
	}
		

	for (i = 0; i < n; i++)
	{
		for (l = i; l < n; l++)
		{
			_putchar(' ');
		}
		for (l = 1; l <= i; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
