#include "main.h"
#include <ctype.h>

/**
 * print_sign- Function that checks if a character is lowecase
 * @n: is a a character that is to be checked whether it is a
 * posive/negative number or is equivalent to 0
 *
 * Description - prints 1,0,-1 for -ve,zero,+ve numbers
 *
 * Return: conditionally -1, 0 or 1 always
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
