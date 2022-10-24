#include <stdlib.h>
#include "lists.h"
/**
 * print_list- prints a list
 * @h: linked list head pointer
 * Description: prints node element values
 *
 * Return: number of nodes printed else NULL
 */
size_t print_list(const list_t *h)
{
	int node_counter;

	node_counter = 0;
	while (h != NULL)
	{

		if (h->str == NULL)
		{
			_putchar('[');
			_print_number(h->len);
			_putchar(']');
			_putchar(' ');
			_puts_recursion("(nil)");
		}
		else
		{
			_putchar('[');
			_print_number(h->len);
			_putchar(']');
			_putchar(' ');
			_puts_recursion(h->str);
		}
		/* advance to next node*/
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
/**
 * _puts_recursion- prints a string
 * @s: string to print
 *
 * Description- outputs a string using recursive calls
 * to function _puts_recursion(s)
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);

}
/**
 * _print_number - Prints an integer using recursion
 * @n: Integer to print
 * Return - void
 */

void _print_number(int n)
{
	int temp;

	if (n < 0)
	{
		temp = -n;
		_putchar('-');
	}
	else
	{
		temp = n;
	}
	if (temp / 10) /* Captures the first digit */
	{
		_print_number(temp / 10);
		/* Recursively call function to print e.g 1024 - 102 - 10 - 1*/
	}
	_putchar((temp % 10) + '0'); /* adding the 0 converts it to a char*/
	/* grabs the last digit of a number */
}


