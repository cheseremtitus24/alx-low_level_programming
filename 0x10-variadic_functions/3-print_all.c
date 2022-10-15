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
	char c;
	float f;
	int d;
	int count;
	char *sp;
	char *s;
	char *sep;

	sep = ", ";
	count = 0;
	

	format != NULL ? va_start(ap, format) : exit(0);

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
				/*checks and handles NULL srings*/
				s = sp ? sp : "(nil)";
				printf("%s%s", sep, s);
				break;

			case 'i':              /* int */
				d = va_arg(ap, int);
				printf("%s%d", sep, d);
				break;

			case 'f':
		  		/**
				 * float  needs a cast here since va_arg only
				 * takes fully promoted types 
				 */
				f = (float) va_arg(ap, double);
				printf("%s%f", sep, f);
				break;

			case 'c':
		  		/**
				 * char needs a cast here since va_arg only
				 * takes fully promoted types 
				 */
				c = (char) va_arg(ap, int);
				printf("%s%c", sep, c);
				break;

			default:
				break;
		}
	}

	va_end(ap);
	printf("\n");
	exit(0);
}
