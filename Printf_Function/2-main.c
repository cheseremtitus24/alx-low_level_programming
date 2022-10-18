#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "We are the ones %s two %s wiki";
    char *f;
    unsigned int curr_str_index = 0;

    f = _strchr(s, '%', &curr_str_index );

    if (f != NULL)
    {
        printf("%s\n current position: %d", f, curr_str_index);
	// call  format specifier with args of current str index and first arg index of e.g replace number/string
	foo(f,curr_str_index, va_arg(ap, char *);
	//function parses and prints the format and returns the proper position of string index after reading and outputting.
    }

    return (0);
}
