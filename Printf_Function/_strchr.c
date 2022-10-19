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

int _strchr(char *s, int *scan_index, char c, int *counted)
{
    /* Return the number of characters that have been written*/
	int i = *scan_index;

	if ((int)strlen(s) < 0)
		return (-1);

	for (; s[i] != '\0' && s[i] != '%'; i++)
	{
		if (s[i] == c)
		{
			*counted = i;
            *scan_index = *counted + 1;
			return (i);
		}
		_putchar(s[i]);
	}
	if (s[i] == '\0')
    {
        *counted = -1;
        *scan_index = *counted;
        return (-1);
    }
	*counted = i;
	return((i - *scan_index));

}

