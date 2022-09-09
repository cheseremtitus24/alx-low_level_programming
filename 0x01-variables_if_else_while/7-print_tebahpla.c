#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints lowercase
 * alphabets in reverse order from z-a
 * Return: Always 0 (Success)
 */


/* betty style doc for function main goes there */
int main(void)
{
	char c = 'z';

	while (c <= 'z' && c >= 'a')
	{

		putchar(c);
		c--;

	}


	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
