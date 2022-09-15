#include "main.h"
/**
 * _isupper - checks for uppercase alphabets
 * @c: character to be checked
 *
 * Description - Checks whether a character is uppercase and returns 1 if it's
 * true else reports 0 uses the ctypes.h in its use of isupper() *nix built in
 * Return: 1 if true else 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
