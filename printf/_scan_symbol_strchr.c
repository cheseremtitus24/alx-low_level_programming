#include <stddef.h>
#include <string.h>
/**
 * scan_symbol_strchr- Search for character in a string
 * @s: input string
 * @scan_index: updates position of next search start
 * @c: character to locate
 * @counted: Position of the Scanned Symbol
 *
 * Description- returns a pointer to the first occurrence of c in string
 *
 * Return: character pointer and sets counted to a positive else negative.
 */

char *scan_symbol_strchr(char *s, int *scan_index, char c, int *counted)
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
	}
	*counted = -1;
	*scan_index = *counted;
	return (NULL);
}

