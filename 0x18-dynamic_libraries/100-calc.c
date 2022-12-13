#include "100-calc.h"

/**
 * sub- Function subtracts two integer values
 * @a: integer value 
 * @b: integer value
 *
 * Description - Performs arithmetic subtraction on 2 integers
 *
 * Return: a number
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * add- Function adds two integer values
 * @a: integer value 
 * @b: integer value
 *
 * Description - Performs arithmetic addition on 2 integers
 *
 * Return: a number
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * mul- Function multiplies two integer values
 * @a: integer value 
 * @b: integer value
 *
 * Description - Performs arithmetic multiplication on 2 integers
 *
 * Return: a number
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div- Function divides two integer values
 * @a: integer value 
 * @b: integer value
 *
 * Description - Performs arithmetic division on 2 integers
 *
 * Return: a number
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod- Function find the remainder of division operation
 * @a: integer value 
 * @b: integer value
 *
 * Description - Performs arithmetic division on 2 integers
 *
 * Return: a number
 */
int mod(int a, int b)
{
	return (a % b);
}
