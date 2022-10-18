#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr- Search for character in a string
 * @s: input string
 * @scan_index: Tracks current position index to scan from
 * @c: source buffer to copy data from
 * @counted: Saves position of the c string
 *
 * Description- returns a pointer to the first occurrence of c in string
 *
 * Return: character pointer
 */

char *_strchr(char *s, unsigned int *scan_index, char c, unsigned int *counted)
{
	unsigned int i = *scan_index;
	char *ret;

	if ((int)strlen(s) < 0)
		return (s);

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ret = &s[i];
			*counted = i;
            *scan_index = *counted + 1;
			return (ret);
		}
		_putchar(s[i]);
	}
	*counted = -1;
    *scan_index = *counted;
	return (NULL);
}

