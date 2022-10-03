#include "main.h"
/**
 * _strdup- duplicates a string
 * @str: String to be duplicated
 *
 * Description- Dynamically allocates memory in heap and saves and returns a
 * copy of the input string str
 *
 * Return: char pointer else NULL
 */

char *_strdup(char *str)
{
	int i;
	int strsize = _sizeof(str);
	char *dynmemptr;

	if (str == NULL)
		return (NULL);
	dynmemptr = (char *) malloc((sizeof(char) * strsize) + 1);

	if (dynmemptr == NULL)
		return (NULL);

	for (i = 0; i < (int)(sizeof(char) * strsize) ; i++)
		dynmemptr[i] = *str++;
	dynmemptr[i + 1] = '\n';

	return (dynmemptr);

}

/**
 * _sizeof- finds the length of a string
 * @s: String to find the length
 *
 * Description- Returns the length of a string less the null pointer '\0'
 *
 * Return: positive integer
 */
unsigned int _sizeof(char *s)
{
	int i = 0;
	int count = 0;

	for (; s[i] != '\0'; i++)
		count++;

	if (count < 1)
		return (0);

	return (count);
}

