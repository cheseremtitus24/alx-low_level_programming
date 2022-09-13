#include "main.h"

/**
 * print_alphabet - Function that prints a-z
 *
 * Description - Prints lowercase alphabets in ascending order
 *
 * Return: 0 always
 */

void print_alphabet(void)
{
	char a = 'a';

	for ( ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
