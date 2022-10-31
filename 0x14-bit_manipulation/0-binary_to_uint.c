#include "main.h"
/**
 * binary_to_uint- Converts binary numbers to Decimal Numbers
 * @b: Input String
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, slen;
	unsigned int decimal = 0;
	unsigned int base2 = 1;

	slen = _strlen_recursion(b);
	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			decimal += base2;
		else if (b[i] != '0')
			return (0);
		base2 = base2 * 2;
	}

	return (decimal);
}
/**
 * _strlen_recursion- prints length of a string
 * @s: input string
 *
 * Description- outputs the length of an input string
 *
 * Return: positive integer else 0
 */

int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


