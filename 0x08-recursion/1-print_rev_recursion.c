#include "main.h"
/**
 * _print_rev_recursion- prints a string in reverse
 * @s: string to print
 *
 * Description- outputs a string in reverse using recursion
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\n')
		_putchar('\n');
	if (*s)
	{
		s = s + 1;
		_print_rev_recursion(s);
		_putchar(*s);
	}
	else
		_putchar('\n');

}

