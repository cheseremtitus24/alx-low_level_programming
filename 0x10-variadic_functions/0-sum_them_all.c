#include "variadic_functions.h"
#include <stdarg.h> /* added for ease of later reference*/
/**
 * sum_them_all- sums all passed in function parameters
 * @n: Number of successive parameters to expect
 *
 * Description - Performs summation of passed in function parameters
 * Return: positive number else  0
 */

int sum_them_all(const unsigned int n, ...)
{
	/* initialize a variable ap of type var_list*/
	unsigned int i;
	unsigned int sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	i = 0;
	sum = 0;

	/* iterate through arguments list through the generator func va_arg*/
	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);

}
