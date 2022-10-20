#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
   /* _printf("There is nothing to hold you down\n %");*/
    _printf("%s%s There is nothing to hold you down\n", "Hello", "World");
    /*_printf("There is nothing to hold you down %s \n", "Hello");*/
    /*_printf("There is nothing  %s to hold you down %s \n", "Hello", "World");*/
    /*_printf("There is %d nothing to hold you down\n", 22);*/

    /*_printf("\\We are the ones %s two %s \\wiki", "Hello", "World");*/

    /*char *f;
    unsigned int curr_str_index = 0;

    f = _strchr(s, '%', &curr_str_index );

    if (f != NULL)
    {
        printf("%s\n current position: %d", f, curr_str_index);
        // call  format specifier with args of current str index and first arg index of e.g replace number/string
        foo(f,curr_str_index, va_arg(ap, char *);
        //function parses and prints the format and returns the proper position of string index after reading and outputting.
    }
     */



    /*
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
     */
    return (0);
}
