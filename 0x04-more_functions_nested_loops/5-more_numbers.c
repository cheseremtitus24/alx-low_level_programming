#include "main.h"
/**
 * more_numbers - prints integers from 0 to 14
 * outputed 10 times
 *
 * Description - Function implements the use of write to output
 * character-integer mappings using ASCII Table.
 * Return: void
 */

void more_numbers(void)
{
	unsigned char AsciiTable[10];
	int i, j, k;
	int count = 48;

	for (k = 0; k < 10; k++)
	{
		AsciiTable[k] = count++;
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				int ones;
				int tenths;

				extractBiNums(j, &ones, &tenths);
				_putchar(AsciiTable[ones]);
				_putchar(AsciiTable[tenths]);
				/* i must be split in two */
			}
			else
			{
				_putchar(AsciiTable[j]);
			}
		}
		_putchar('\n');

	}

}

/**
 * extractBiNums- Function captures individual digits making a number
 * @x: a number between 10 & 99
 * @first: the hundreds digit
 * @last: the one's digit
 *
 * Description - capture the ones tenths digits of a number
 * Example extractBiNums(96,first,last) --> 9, 6
 * Return: void
 */
void extractBiNums(int x, int *first, int *last)
{
	while (x >= 10)
	{
		*last = x % 10;		/* Gets last digit */
		x = x / 10;		/* Gets the first digit */
	}
	*first = x;
}
