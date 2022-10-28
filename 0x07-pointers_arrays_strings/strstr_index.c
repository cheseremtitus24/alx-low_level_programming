#include <stddef.h>
#include <stdio.h>
#include <string.h>

int _strstr(char *haystack, char *needle);
int main(void)
{
	char *haystack = "Hello to the World";
	char *needle = "ef";

	printf("%d",_strstr(haystack, needle));

	return (0);
}
int _strstr(char *haystack, char *needle)
{
	char *a, *b;
	int counter;

	/**
	 * First scan quickly through the two strings looking for a
	 * single-character match.  When it's found, then compare the
	 * rest of the substring.
	 */
	counter = 1;

	b = needle;
	if (*b == 0)
	{
		return (0);
	}
	for (; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			counter++;
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (counter);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (-1);

}
