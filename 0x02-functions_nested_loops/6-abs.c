#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point of the Program
  *
  * Description: Prints an integer's absolute value that is
  * end delimited by a new line
  *
  * Return: 0 always.
  */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	return (0);
}
/**
 * _abs- Function that checks if a character is lowecase
 * @n: is an integer value
 *
 * Description - returns the absolute value of an integer
 *
 * Return: an absolute value of an integer
 */

int _abs(int n)
{
	return ((int) abs(n));

}
