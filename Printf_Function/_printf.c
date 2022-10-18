#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void foo(char *fmt, ...);   /* '...' is C syntax for a variadic function */
int main(void)
{
	char *s = "Hello";
	int b = 4;
	printf("Who are %s in the %d\n",s, b);
	foo("Who are %s in the d",s, b);

	return (0);
}

	/*foo(fstring,curr_str_index, va_arg(ap, char );
	 */
void foo(char *fmt, ...)   /* '...' is C syntax for a variadic function */
{
	va_list ap;
	int d;
	char c;
	char *s;

	va_start(ap, fmt);

	printf("%ld\n",strlen(fmt));
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
