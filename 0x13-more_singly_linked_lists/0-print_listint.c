#include <stdlib.h>
#include "lists.h"
/**
 * print_listint- prints a list
 * @h: linked list head pointer
 * Description: prints node element values
 *
 * Return: number of nodes printed else NULL
 */
size_t print_listint(const listint_t *h)
{
	int node_counter;

	node_counter = 0;
	while (h != NULL)
	{
		_print_number(h->n);
		_putchar('\n');
		/* Increment node Count Tracker*/
		node_counter++;
		/* advance to next node*/
		h = h->next;
	}
	return (node_counter);
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


