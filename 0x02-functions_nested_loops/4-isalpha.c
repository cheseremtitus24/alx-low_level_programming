#include "main.h"
#include <ctype.h>

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
