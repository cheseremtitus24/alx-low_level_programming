#include <string.h>
/**
 * _memset- fills string indexes with bytes
 * @s: buffer
 * @b: bytes to use to fill memory space
 * @n: number of bytes memory space to fill
 *
 * Description- fills first n-indexes of an input buffer- s with the b-bytes.
 *
 * Return: character pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	/*memset(s, b, n);*/

	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}

