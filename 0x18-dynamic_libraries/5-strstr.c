#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * _strstr- Finds a substring in a string
 * @haystack: input string
 * @needle: substring to search for
 *
 * Description- searches for the first matching substring in a string
 * and returns address of first character of substring
 * Return: string pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	/**
	 * First scan quickly through the two strings looking for a
	 * single-character match.  When it's found, then compare the
	 * rest of the substring.
	 */

	b = needle;
	if (*b == 0)
	{
		return (haystack);
	}
	for (; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (NULL);

}
