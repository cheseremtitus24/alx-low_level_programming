#include "main.h"
#include <string.h>
/**
 * puts_half - Outputs last half of a  string
 * @str: string to print
 *
 * Description- Outputs last half of a string to stdout
 *
 * Return: void
 */
void puts_half(char *str)
{
	unsigned long int i;
	unsigned long int length = strlen(str);

	if (strlen(str) < 2)
	{
		_putchar('\n');
	}
	else
	{
		/*1 place less for the '\0' string char*/
		for (i = 0; i <= strlen(str) - 1; i++)
		{
			if (length % 2  == 0)/*is even*/
			{
				/* print the last half */
				if (i >= (length / 2))
				{
					_putchar(str[i]);
				}
				else
					continue;
			}
			else /* length is odd */
			{
				if (i >= ((length - 1) / 2))
					_putchar(str[i]);
				else
					continue;

			}

		}
		_putchar('\n');
	}
}
