#include "main.h"
/**
 * _strcpy- replicates the contents of an input string
 * @dest: destination string
 * @src: source string
 *
 * Description-Copies contents from source string to dst string
 * and returns pointer to the first element of the dest string
 *
 * Return: character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}

