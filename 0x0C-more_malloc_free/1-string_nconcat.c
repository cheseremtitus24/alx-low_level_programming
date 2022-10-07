#include "main.h"
#include <string.h>
/**
 * string_nconcat- Concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: length to copy from src to destination
 *
 * Description- Appends string contents of src to dest for a specified length.
 *
 * Return: char pointer
 */
char *string_nconcat(char *dest, char *src, unsigned int n)
{
	int i, dest_len, src_len;
	char *dynmemptr;

	/* handle NULL Strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	dest_len = strlen(dest) + 1;
	src_len = strlen(src) + 1;

	/* create memory store in heap*/
	dynmemptr = malloc(dest_len);
	/* Check that memory allocation was a success*/
	if (dynmemptr == NULL)
		return (NULL);

	/* Copy contents of dest to dynamic memory */
	for (i = 0; dest[i] != '\0'; i++)
		dynmemptr[i] = dest[i];
	dynmemptr[i] = '\0';

	if ((int)n >= src_len)
	{
		/*overwriting the terminating null byte '\0'@ end of dest.*/
		for (i = 0; src[i] != '\0'; i++)
			dynmemptr[dest_len + i] = src[i];
		/* adds a terminating null byte*/
		dynmemptr[i] = '\0';
	}
	else
	{
		for (i = 0; i < (int)n && src[i] != '\0'; i++)
		{
			dynmemptr[dest_len - 1 + i] = src[i];
		}
		dynmemptr[dest_len + i] = '\0';
	}

	return (dynmemptr);
}

