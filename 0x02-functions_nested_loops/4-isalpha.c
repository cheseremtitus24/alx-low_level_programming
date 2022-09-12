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

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
}
/**
 * _isalpha- Function that checks if a character is lowecase
 * @c: is a a character that is to be checked
 *
 * Description - Prints alphanumeric characters as returning 1 else 0
 *
 * Return: conditionally 0 or 1 always
 */

int _isalpha(int c)
{
	int ret = isalpha((unsigned char) c) > 0 ? 1 : 0;

	return (ret);

}
