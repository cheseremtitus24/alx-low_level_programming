#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints all the numbers
 * of base 16.
 * Example: 0123456789abcdef 
 * Return: Always 0 (Success)
 */


int main(void)
{
	char c = '0';
	char C = 'a';

	while (c >= '0' && c <= '9')
	{

		putchar(c);
		c++;

	}


	while (C >= 'a' && C <= 'f')
	{

		putchar(C);
		C++;

	}

	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
