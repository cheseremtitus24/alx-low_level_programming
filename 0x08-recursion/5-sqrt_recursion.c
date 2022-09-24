#include "main.h"
#include <stdlib.h>
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
	int x = 1;
	int y = 0;

	if (n <= 0)
		return (-1);
	return (y + _sqrt(n - 1, x, y));
}

/**
 * _sqrt- computes the square root of a number
 * @n: input number
 * @x: subtrahend (odd numbers 1,3,5 ...)
 * @y: Tracks the number of times subtractions have taken place
 *
 * Description- Computes the square root of a number recursively using the
 * subtraction of odd numbers till subtraend is zero.
 * Method: Repeated Subtraction of Square Root
 * sourced from : https://cuemath.com/algebra/squares-and-square-roots
 *
 * Return: positive integer else -1
 */
int _sqrt(int n, int x, int y)
{
	/* Initially subtract by 1 in the calling function*/
	if (n < 0)
		return (-1);
	if (n == 0)
		return (y + 1);
	y++;
	x += 2;
	return (_sqrt((n -= x), x, y));
}
