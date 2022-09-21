#include "main.h"
/**
 * leet- Translates upper/lower cases to a number
 * @s: Input String
 *
 * Description- Translates [Aa][Ee][Oo][Tt] to 43107 respectively
 *
 * Return: string pointer
 */

char *leet(char *s)
{
	int i, j;
	char *pcode = "AELOTaelot";
	char *ecodes = "4310743107";

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

