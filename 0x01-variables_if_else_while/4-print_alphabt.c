#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints lowecase
 * alphabets from a-z except for q and e
 * Return: Always 0 (Success)
 */


int main(void)
{
	char c = 'a';

	while (c >= 'a' && c <= 'z')
	{

		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		else
		{
			putchar(c);
			c++;
		}

	}


	/* Write the Character to stdout */
	putchar('\n');

	return (0);
}
