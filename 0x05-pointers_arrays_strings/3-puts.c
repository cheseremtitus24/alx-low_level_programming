#include "main.h"
#include <string.h>
/**
 * _puts - Outputs a string
 * @str: string to print
 *
 * Description- Outputs a string to stdout
 *
 * Return: void
 */
void _puts(char *str)
{
	unsigned long int i;

	if (strlen(str) < 2)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= strlen(str) - 1; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
