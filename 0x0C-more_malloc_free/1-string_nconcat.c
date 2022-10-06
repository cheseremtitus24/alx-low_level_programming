#include "main.h"
/**
 * string_nconcat- Concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: length to copy from src to destination
 *
 * Description- Appends string contents of src to dest for a specified length.
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dynmemptr;
	int i, dest_len, src_len;

	/* handle NULL Strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	dest_len = _strlen_recursion(s1);
	src_len = _strlen_recursion(s2);

	/* create memory store in heap*/
	dynmemptr = malloc(dest_len + 1);
	/* Check that memory allocation was a success*/
	if (dynmemptr == NULL)
		return (NULL);

	/* copy the contents of destination to malloc ptr*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		dynmemptr[i] = s1[i];
	}
	dynmemptr[i] = '\0';

	/* call _strncat function*/
	if ((int) n >= src_len)
	{
		dynmemptr = _strncat(dynmemptr, s2, src_len);
	}
	else
		dynmemptr = _strncat(dynmemptr, s2, n);

	return (dynmemptr);
}
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
	int i, dest_len, src_len;

	dest_len = _strlen_recursion(dest);
	src_len = _strlen_recursion(src);

	for (i = 0 ; i < n && src[i] != '\0' && n <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * _strlen_recursion- prints length of a string
 * @s: input string
 *
 * Description- outputs the length of an input string
 *
 * Return: positive integer else 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

