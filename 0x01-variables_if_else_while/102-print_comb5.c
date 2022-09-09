#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints 1000C3- "1000" -Combination-'2'
 * numbers from 0-9
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a, b, c, d = 48;

	for (c = 48; c <= 57; c++)
	{
		for (a = 48; a <= 57; a++)
		{
			/**
			 *  combinations is based on order and
			 *  always the preceding value should always
			 *  be smaller than the successor 02 12. Violates 12 02
			 */
			for (b = 48; b <= 57; b++)
			{
				for (d = 48; d <= 57; d++)
				{
					if ((c + a) < (b + d))
					{
						putchar(c);
						putchar(a);
						putchar(' ');
						putchar(b);
						putchar(d);
					if (a == 56 && c == 57 && b == 57 && d == 57)
					{
						//continue;
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
	}
	/* Write the Character to stdout */
	putchar('\n');
	return (0);
}
