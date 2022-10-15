#include "variadic_functions.h"
#include <stdarg.h> /* added for ease of later reference*/
#include <stdio.h>
/**
 * print_numbers- prints numbers
 * @separator: integer separator character
 * @n: Number of successive parameters to expect
 *
 * Description - prints format separated integer values
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/* initialize a variable ap of type var_list*/
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}


	va_start(ap, n);

	/* iterate through arguments list through the generator func va_arg*/
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(ap, int));
			continue;
		}
		if (separator != NULL)
		{
			printf("%s%d", separator, va_arg(ap, int));
			continue;
		}

		printf("%d", va_arg(ap, int));
	}
	printf("\n");

	va_end(ap);
	exit(0);
}
