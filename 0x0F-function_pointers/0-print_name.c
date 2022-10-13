#include "function_pointers.h"
/**
 * print_name- prints an input string
 * @name: string to print
 * @f: function pointer
 *
 * Description- outputs a string through a function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}

