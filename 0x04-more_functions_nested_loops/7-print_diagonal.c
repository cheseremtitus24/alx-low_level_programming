#include "main.h"
/**
 * print_diagonal- prints a diagonal
 * @n: number of times to print a line
 *
 * Description - Function implements the use of write to output
 * character-integer mappings using ASCII Table.
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for(int l = 0; l <= i; l++)
		{
			if(l == i)
				_putchar('\\');
			else if (l < i)
				_putchar(' ');
		}
		_putchar('\n');
	}

}
