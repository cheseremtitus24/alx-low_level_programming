#include "main.h"

/**
  * main - Entry point of the Program
  *
  * Description: Prints the string _putchar and is end delimited by a new line
  *
  * Return: 0 always.
  */

int main(void)
{
	print_alphabet();
	return (0);
}
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
