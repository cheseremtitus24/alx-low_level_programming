#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * times_table - Function prints time in '24' hour system
 *
 * Description - Prints multiples of 9 from 0 through 9
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, indexer = 0;
	int counter = 48;
	int asciilookup[10];

	for (; counter <= 57; counter++)
	{
		asciilookup[indexer] = counter;
		indexer++;
	}

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int multiply = row * column;
			int hlval = multiply % 10; /* Gets the last digit*/
			int hfval = multiply / 10; /* Gets the first digit*/

			if (multiply < 10)
			{
				if (column  != 0)
				{
					_putchar(' ');
				}
				_putchar(asciilookup[hlval]);
			}
			else
			{
				_putchar(asciilookup[hfval]);
				_putchar(asciilookup[hlval]);
			}
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
