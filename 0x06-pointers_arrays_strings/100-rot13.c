#include "main.h"

/**
 * rot13- Displaces Alphabets by key value 13
 * @s: Input String
 *
 * Description- Translates [Aa][Ee][Oo][Tt] to 43107 respectively
 *
 * Return: string pointer
 */
char *rot13(char *s)
{
	if ( (int)strlen(s) <=0 )
	{
		return;
	}
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

