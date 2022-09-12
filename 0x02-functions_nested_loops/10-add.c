#include "main.h"
#include <stdio.h>

/**
  * main - Entry point of the Program
  *
  * Description: Outputs the Sums of 2 digits.
  *
  * Return: 0 always.
  */

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);

	return (0);
}
/**
 * add - Function performs summation of 2 integers
 * @a: integer value
 * @b: integer value
 *
 * Description - Adds two numbers and returns the result
 * Example add(1,2) --> 3
 *
 * Return: 0 always.
 */

int add(int a, int b)
{
	return (a + b);
}
