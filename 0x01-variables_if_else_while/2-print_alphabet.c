#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints lowercase
 * alphabets from a-z
 * Return: Always 0 (Success)
 */


int main(void)
{
	char c = 'a';

	while (c >= 'a' && c <= 'z')
	{

		putchar(c);
		c++;

	}


	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
