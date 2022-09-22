#include "main.h"
#include <string.h>
/**
 * _strncpy- copies one string to another string
 * @dest: destination string
 * @src: source string
 * @n: length to copy from src to destination
 *
 * Description- copies overwrites string contents of dest
 * and copies specified length of contents from src to dest.
 *
 * Return: character pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	/**
	 * when source to copy is less than destination
	 * padd the empty indexes with '\0'
	 */
	int i;

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	/* padd empty dest indexes with '\0' */
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
