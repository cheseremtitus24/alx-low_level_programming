#include "main.h"
/**
 * print_square - prints a square
 * @size: number of times to print a square
 *
 * Description - Function implements the use of write to output
 * character-integer mappings using ASCII Table.
 * Return: void
 */

void print_square(int size)
{
	int i;
	int l;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
