#include "main.h"
/**
 * _puts_recursion- prints a string
 * @s: string to print
 *
 * Description- outputs a string using recursive calls
 * to function _puts_recursion(s)
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/*_putchar('\n');*/
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);

}

