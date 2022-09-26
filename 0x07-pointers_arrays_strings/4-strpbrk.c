#include <stddef.h>
/**
 * _strpbrk- Search for character in a string
 * @s: input string
 * @accept: accepted characters
 *
 * Description- prints string from where the first matching character in accept
 * is found
 * Return: string pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ret;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ret = &s[i];
				return (ret);
			}
		}

	}
	return (NULL);
}
