#include "main.h"
#include <stdio.h>
/**
 * string_toupper- Translates Lowercase to Uppercase
 * @s: Input String
 *
 * Description- Translates lowercase characters to equivalent Uppercase values.
 *
 * Return: string pointer
 */

char *string_toupper(char *s)
{
	int slen = strlen(s);
	int i, j;
	char *caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";

	/* iterate through entire input string */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < strlen(caps); j++)
		{
			if (s[i] == lower[j])
			{
				s[i] = caps[j];
			}
		}
	}

	return (s);
}

