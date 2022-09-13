#include "main.h"

/**
 * print_alphabet_x10 - Function that prints a-z
 *
 * Description - Prints lowercase alphabets in ascending order
 *
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int counter = 0;

	for ( ; counter <= 9; counter++)
	{

		for ( ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		a = 'a';
		_putchar('\n');
	}
	_putchar('\n');
}
