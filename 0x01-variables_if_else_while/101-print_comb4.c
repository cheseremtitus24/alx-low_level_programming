#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints 10C3- "10" -Combination-'3'
 * numbers from 0-9
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a, b, c = 48;

	for (; c <= 57; c++)
	{
		for (a = 48; a <= 57; a++)
		{
			/**
			 *  for combinations is based on order and
			 *  always the preceding value should always
			 *  be smaller than the successor 012.
			 *  120 violates this rule since the predecessor is bigger than
			 *  the successor.
			 */

			for (b = 48; b <= 57; b++)
			{
				if (c < a && a < b)
				{
					putchar(c);
					putchar(a);
					putchar(b);
					if (c == 55 && b == 57)
					{
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

		}
	}
	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
