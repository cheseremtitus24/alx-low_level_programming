#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints decimal 
 * numbers from 0-9
 * Return: Always 0 (Success)
 */


int main(void)
{
	char c = '0';

	while (c >= '0' && c <= '9')
	{

		putchar(c);
		c++;

	}


	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
