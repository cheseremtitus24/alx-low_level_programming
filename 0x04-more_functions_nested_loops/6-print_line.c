#include "main.h"
/**
 * print_line- prints a line
 * @n: number of times to print a line
 *
 * Description - Function implements the use of write to output
 * character-integer mappings using ASCII Table.
 * Return: void
 */
void print_line(int n)
{
	int i;
	if (n < 0)
	{
		_putchar('\n');
		exit(0);
	}


	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
