#include "main.h"
#include <stdlib.h>


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
	lastnum = _abs(lastnum);

	_putchar('0' + lastnum);

	return (lastnum);
}
