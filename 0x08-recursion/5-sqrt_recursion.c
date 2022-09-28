#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion- computes the square root of a number
 * @n: input number
 *
 * Description- Computes the square root of a number recursively using the
 * subtraction of odd numbers till subtraend is zero.
 * Method: Repeated Subtraction of Square Root
 * sourced from : https://cuemath.com/algebra/squares-and-square-roots
 *
 * Return: positive integer else -1
 */
int _sqrt_recursion(int n)
{
	static int x = 1;
	static int y;
	static int flag  = 1;

	if (flag == 1)
	{
		n -= 1;
		flag = 0;
	}
	if (n < 0)
		return (-1);
	if (n == 0)
		return (y + 1);
	y++;
	return (_sqrt_recursion((n -= (x += 2))));
}

