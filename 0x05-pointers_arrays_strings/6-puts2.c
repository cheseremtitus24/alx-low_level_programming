#include "main.h"
#include <string.h>
/**
 * puts2 - Outputs a string
 * @str: string to print
 *
 * Description- Outputs a string to stdout skipping at intervals
 *
 * Return: void
 */
void puts2(char *str)
{
	unsigned long int i;

	if (strlen(str) < 2)
	{
		_putchar('\n');
	}
	else
	{
		/*1 place less for the '\0' string char*/
		for (i = 0; i <= strlen(str) - 1; i++)
		{
			if (i == 0)
			{
				_putchar(str[i]);
			}
			else if (i % 2 == 0)
			{
				_putchar(str[i]);
			}
			else
				continue;

		}
		_putchar('\n');
	}
}
