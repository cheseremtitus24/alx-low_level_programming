#include "variadic_functions.h"
#include <stdarg.h> /* added for ease of later reference*/
#include <stdio.h>
/**
 * print_strings- prints strings
 * @separator: separator character
 * @n: Number of successive parameters to expect
 *
 * Description - prints format separated string values
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	/* TODO: handle NULL argument strings*/
	unsigned int i;
	char *p;
	char *ip;
	/* initialize a variable ap of type var_list*/
	va_list ap;

	if (n == 0)
		exit(0);

	va_start(ap, n);

	/* iterate through arguments list through the generator func va_arg*/
	for (i = 0; i < n; i++)
	{
		ip = va_arg(ap, char *);
		p = ip ? ip : "(nil)";
		if (i == 0)
		{
			printf("%s", p);
			continue;
		}
		if (separator != NULL)
		{
			printf("%s%s", separator, p);
			continue;
		}

		printf("%s", p);
	}
	printf("\n");

	va_end(ap);
	exit(0);
}
