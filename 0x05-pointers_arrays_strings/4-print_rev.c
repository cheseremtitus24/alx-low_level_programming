#include <string.h>
#include "main.h"
/**
 * print_rev - Outputs a string
 * @s: string to be reversed
 *
 * Description- Outputs a string in reverse to stdout
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	if (strlen(s) < 2)
	{
		_putchar('\n');
	}
	else
	{
		for (i = (int)(strlen(s) - 1); i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}

}
