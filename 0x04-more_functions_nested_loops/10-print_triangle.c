#include "main.h"
/**
 * print_triangle - prints a triangle
 * @n: number of times to print the triangle
 * description- prints the left sided diagonal
 * Return: void
 */

void print_triangle(int n)
{
	int i;
	int l;

	if (n <= 0)
	{
		_putchar('\n');
		exit(0);
	}

	for (i = 1; i <= n; i++)
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
