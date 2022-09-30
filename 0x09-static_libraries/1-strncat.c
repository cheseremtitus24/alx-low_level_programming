#include "main.h"
#include <string.h>
/**
 * _strncat- appends two string
 * @dest: destination string
 * @src: source string
 * @n: length to copy from src to destination
 *
 * Description- Appends string contents of src to dest for a specified length.
 *
 * Return: character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';
	return (dest);
}

