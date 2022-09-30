#include "main.h"
/**
 * _print_rev_recursion- prints a string in reverse
 * @s: string to print
 *
 * Description- outputs a string in reverse using recursion
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	int i;
	char *s = (*argv + 0);


	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
