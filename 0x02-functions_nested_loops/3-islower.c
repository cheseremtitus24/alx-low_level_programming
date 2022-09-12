#include "main.h"
#include <ctype.h>

/**
  * main - Entry point of the Program
  *
  * Description: Prints the string _putchar and is end delimited by a new line
  *
  * Return: 0 always.
  */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * _islower- Function that checks if a character is lowecase
 * @c: is a a character that is to be checked
 *
 * Description - Prints lowercase alphabets as returning 1 else 0
 *
 * Return: conditionally 0 or 1 always
 */

int _islower(int c)
{
	int ret = islower((unsigned char) c) > 0 ? 1 : 0;

	return (ret);

}
