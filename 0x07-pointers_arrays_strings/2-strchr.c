#include <stddef.h>
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
	/*memcpy(dest, src, n);*/

	unsigned int i;
	char *ret;

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

