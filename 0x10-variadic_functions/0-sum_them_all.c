#include "variadic_functions.h"
#include <unistd.h>
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
	int i;
	int sum;
	va_list ap;

	if (n == 0)
	{
		_putchar('\n');
		return (0);
	}

	va_start(ap, n);

	sum = 0;

	/* iterate through arguments list through the generator func va_arg*/
	for (i = 0; i < (int) n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);

}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
