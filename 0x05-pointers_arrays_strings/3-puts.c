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
	long unsigned int i;

	for (i = 0; i <= strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
