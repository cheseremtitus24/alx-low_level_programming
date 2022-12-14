#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all- prints formatted variable types
 * @format: idata type format specifier
 *
 * Description - prints format separated string values
 * Return: void
 */
void print_all(const char *format, ...)
{
	va_list ap;
	float f;
	int d, count;
	char *sp, *s, *sep, c;

	sep = ", ";
	count = 0;
	format != NULL ? va_start(ap, format) : retval();
	while (*format)
	{
		if (count == 0)
			sep = "";
		if (count > 0)
			sep = ", ";
		count++;
		switch (*format++)
		{
			case 's':              /* string */
				sp = va_arg(ap, char *);
				s = sp ? sp : "(nil)";
				printf("%s%s", sep, s);
				break;
			case 'i':              /* int */
				d = va_arg(ap, int);
				printf("%s%d", sep, d);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%s%f", sep, f);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%s%c", sep, c);
				break;
			default:
				break;
		}
	}
	va_end(ap);
	retval();
}
/**
 * retval- prints a new line and exit with a zero status
 *
 * Description - Exits with a success status
 * Return: void
 */
void retval(void)
{
	printf("\n");
	exit(0);
}
