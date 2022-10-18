#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _atoi- converts an string integer to an integer value
 * @s: string to parse for integer strings
 *
 * Description- Parses for integers within a string and returns an integer
 *
 * Return: integer value else 0 on error
 */
int _atoi(char *s)
{
	int number, i;
	int numexists;
	int flag = 0;

	number = 0;
	numexists = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			flag += 1;
			continue;
		}
		else if ((s[i] >= ' ' && s[i] <= '/') || (s[i] >= ':' && s[i] <= '@'))
		{
			/* checks "23 33" returns only 23*/
			if (s[i - 1] > '0' && s[i - 1] < '9')
				break;
			continue;
		}
		else if ((s[i] >= '[' && s[i] <= '`') || (s[i] <= 'z' &&
					s[i] >= 'a') ||  (s[i] <= 'Z' &&
					s[i] >= 'A') || (s[i] >= '{' && s[i] <= '~')
				|| s[i] == '\n')
		{
			/* checks "23z33" returns only 23*/
			if (s[i - 1] > '0' && s[i - 1] < '9')
				break;
			continue;
		}
		numexists += 1;
		number = number * 10 + s[i] - '0';
	}
	if (flag % 2 == 0)
		return (number);
	if (numexists < 1)
		return (0);
	/* handle INT_MIN & INT_MAX*/
	return (number * -1);

}
