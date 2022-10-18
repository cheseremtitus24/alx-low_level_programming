#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"


/*foo(fstring,curr_str_index, va_arg(ap, char );
 */
void _printf(char *fmt, ...)   /* '...' is C syntax for a variadic function */
{
    char *f;
    unsigned int curr_str_index = 0;

    f = _strchr(fmt, '%', &curr_str_index );

    if (f != NULL)
    {
        printf("%s\n current position: %d", f, curr_str_index);
        // call  format specifier with args of current str index and first arg index of e.g replace number/string
        foo(f,curr_str_index, va_arg(ap, char *);
        //function parses and prints the format and returns the proper position of string index after reading and outputting.
    }

	va_list ap;
	int d;
	char c;
	char *s;

	va_start(ap, fmt);

	//printf("%ld\n",strlen(fmt));
				//s = va_arg(ap, char *);
				//is address of close 

	while (*fmt)
	{
		switch (*fmt++) 
		{
			case 's':              /* string */
				s = va_arg(ap, char *);
				printf("%s", s);
				break;
			case 'd':              /* int */
				d = va_arg(ap, int);
				printf("%d", d);
				break;
			case 'c':              /* char */
				/* need a cast here since va_arg only
				takes fully promoted types */
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			default:
				/*printf("%c", *fmt);*/
			

		}
	}

	va_end(ap);
}
