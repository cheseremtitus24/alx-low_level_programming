#include <string.h>
/**
 * _strcat- appends two string
 * @dest: destination string
 * @src: source string
 *
 * Description- Appends string contents of src to dest
 *
 * Return: character pointer
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	/* append a string terminating character */
	dest[dest_len + i] = '\0';
	return (dest);
}

