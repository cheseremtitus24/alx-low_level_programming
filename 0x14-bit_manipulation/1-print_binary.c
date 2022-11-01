#include "main.h"
/**
 * print_binary- Converts a Decimal number to Binary and prints it
 * @n: Input Decimal Number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int mask, i, flag;

	/* handle if n is zero */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* Set a flag that will prevent printing of Leading zeroes*/
	flag = 0;
	/* assuming 32-bit integer*/
	for (i = 31; i >= 0; i--)
	{

		/* calculate bitmask to check whether*/
		/* ith bit of num is set or not*/
		mask = (1 << i);

		/* ith bit of num is set*/
		if (n & mask)
		{
			flag = 1;
			_putchar('1'); /* ith bit of num is not set*/
		}
		else if (!(n & mask) && flag)
			_putchar('0');
	}
}
/**
 * _strlen_recursion- prints length of a string
 * @s: input string
 *
 * Description- outputs the length of an input string
 *
 * Return: positive integer else 0
 */

int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


