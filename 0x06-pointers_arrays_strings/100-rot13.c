#include "main.h"
#include <stdio.h>
/**
 * Algorithm: C = E (p, k) mod 26 = (p + k) mod 26
 * Where: C - Cipher-Text E - Encryption Alg p - Plain-Text k - Shift-key-length
 * AND: mod 26 prevents us from accessing an array out of bounds index.
 * AND: mod also enables us to overlap and route back to the beginning of the
 * array.
 */

/**
 * leet- Translates upper/lower cases to a number
 * @s: Input String
 *
 * Description- Translates [Aa][Ee][Oo][Tt] to 43107 respectively
 *
 * Return: string pointer
 */
char *rot13(char *s)
{
	int i, j;
	char *pcode = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *ecodes = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	/* iterate through entire input string */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; pcode[j] != '\0'; j++)
		{
			if (s[i] == pcode[j])
			{
				s[i] = ecodes[j];
			}
		}
	}

	return (s);
}

