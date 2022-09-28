#include "main.h"
/**
 * _pow_recursion- computes the power of a number
 * @x: base number
 * @y: to the power number
 *
 * Description- Computes the power of a x raised by y recursively
 *
 * Return: positive integer else -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

