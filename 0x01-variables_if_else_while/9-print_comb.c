#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program prints decimals
 * that are comma and space separated
 * Return: Always 0 (Success)
 */


int main(void)
{
	int c = 48;

	while (c >= 48 && c <= 57)
	{

		putchar(c);
		if (c == 57)
		{
			/*putchar('$');*/
			/*write(0,"$",1);*/
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		c++;

	}


	/* Write the Character to stdout */
	putchar('\n');
	/*write(1,"\n",2);*/

	return (0);
}
