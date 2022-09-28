#include "main.h"
/**
 * factorial- computes factorial of a number
 * @n: seed number
 *
 * Description- Computes factorial on a digit s recursively
 *
 * Return: positive integer else 0
 */

int factorial(int n)
{
	if (n == 1 || n == 0)/* factorial of 0 is 1*/
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

