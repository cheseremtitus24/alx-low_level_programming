#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints lowercase
 * and uppercase alphabets from a-zA-Z
 * Return: Always 0 (Success)
 */


int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c >= 'a' && c <= 'z')
	{

		putchar(c);
		c++;

	}


	while (C >= 'A' && C <= 'Z')
	{

		putchar(C);
		C++;

	}

	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
