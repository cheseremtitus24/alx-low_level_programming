#include "main.h"
/**
 * main- Takes in Commandline Arguments
 * @argc: number of commandline arguments
 * @argv: Vector array of commandline arguments
 *
 * Description- prints the executable's filename
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int i;


	for (i = 0; i < argc; i++)
	{
		_puts_recursion(*argv++);
	}
	return (0);
}

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
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);

}

