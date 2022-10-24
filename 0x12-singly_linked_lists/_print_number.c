#include "main.h"
/**
 * print_number - Prints an integer using recursion
 * @n: Integer to print
 * Return - void
 */

void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		temp = -n;
		_putchar('-');
	}
	else
	{
		temp = n;
	}
	if (temp / 10) /* Captures the first digit */
	{
		print_number(temp / 10);
		/* Recursively call function to print e.g 1024 - 102 - 10 - 1*/
	}
	_putchar((temp % 10) + '0'); /* adding the 0 converts it to a char*/
	/* grabs the last digit of a number */
}

