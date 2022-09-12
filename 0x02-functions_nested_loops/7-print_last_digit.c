#include "main.h"
#include <stdlib.h>

/**
  * main - Entry point of the Program
  *
  * Description: Prints an integer's absolute value that is
  * end delimited by a new line
  *
  * Return: 0 always.
  */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');

	return (0);
}

/**
 * _abs- Function that checks if a character is lowecase
 * @n: is an integer value
 *
 * Description - returns the absolute value of an integer
 *
 * Return: an absolute value of an integer
 */

int _abs(int n)
{
	return ((int) abs(n));

}

/**
 * print_last_digit- Function prints and returns an integer
 * @n: is an integer value
 *
 * Description - prints the one's digit of an integer
 *
 * Return: an absolute value of an integer
 */

int print_last_digit(int n)
{
	int absolute = _abs(n);
	int lastnum = absolute % 10;
	int counter;

	_putchar('0' + lastnum);

	return (lastnum);
}
