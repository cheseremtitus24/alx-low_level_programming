#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion- prints a string in reverse
 * @s: string to print
 *
 * Description- outputs a string in reverse using recursion
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	reverse(s, 0);

}

/**
 * reverse- prints a string in reverse
 * @str: string to print in reverse
 * @k: String index
 *
 * Description- outputs a string in reverse using recursion
 *
 * Return: void
 */
void reverse(char *str, int k)
{
	/* base case: end of the string is reached*/
	if (*(str + k) == '\0')
	{
		return;
	}

	/* recur for the next character*/
	reverse(str, k + 1);

	/* print current character*/
	printf("%c", str[k]);
}
