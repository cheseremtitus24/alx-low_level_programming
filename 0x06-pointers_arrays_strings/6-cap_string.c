#include "main.h"
/**
 * cap_string- Translates Lowercase to Uppercase
 * @s: Input String
 *
 * Description- Translates lowercase characters to equivalent Uppercase
 * This is done for every letter succeeding a punctuation character.
 *
 * Return: string pointer
 */
char *cap_string(char *s)
{
	int slen = strlen(s);
	int i, j, k;
	char *caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	/*char *punct = ",;.!?\"(){}' ";*/
	char *punct = " \t\n.?";

	/* iterate through entire input string */

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < strlen(caps); j++)
		{
			if (s[i] == lower[j] && i == 0)
			{
				s[i] = caps[j];
				continue;
			}
			for (k = 0; punct[k] != '\0'; k++)
			{
				if (s[i] == lower[j] && s[i - 1] == punct[k])
					s[i] = caps[j];
			}

		}
	}

	return (s);
}

