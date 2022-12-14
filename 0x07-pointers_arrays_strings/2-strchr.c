#include <stddef.h>
#include <string.h>
/**
 * _strchr- Search for character in a string
 * @s: input string
 * @c: source buffer to copy data from
 *
 * Description- returns a pointer to the first occurrence of c in string
 *
 * Return: character pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *ret;

	if ((int)strlen(s) < 0)
		return (s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ret = &s[i];
			return (ret);
		}
	}
	return (NULL);
}

