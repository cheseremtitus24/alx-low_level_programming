#include <string.h>
/**
 * _memcpy- copies index bytes to a destination
 * @dest: destination buffer
 * @src: source buffer to copy data from
 * @n: number of bytes memory space to copy to destination buffer
 *
 * Description- creates a duplicate of memory bytes from a source buffer
 *
 * Return: character pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*memcpy(dest, src, n);*/

	unsigned int i;

	for (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}

