#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints 10C2- "10" -Combination-'2'
 * numbers from 0-9
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a, c = 48;

	for (; c <= 57; c++)
	{
		for (a = 48; a <= 57; a++)
		{

			/**
			 *  for combinations is based on order and
			 *  always the preceding value should always
			 *  be smaller than the successor 01.
			 *  10 violates this rule since the predecessor is bigger than
			 *  the successor.
			 */
			if (c < a)
			{
				putchar(c);
				putchar(a);
				putchar(' ');

			}

		}
	}



	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
