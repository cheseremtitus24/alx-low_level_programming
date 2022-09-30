#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for digits in passed characters.
 * @c: character to be checked
 *
 * Description - Checks whether a character is a digit and returns 1 if it's
 * true else reports 0 uses the ctypes.h in its use of isdigitr() *nix built in
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
