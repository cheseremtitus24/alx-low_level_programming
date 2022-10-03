#include "main.h"
/**
 * str_concat- duplicates a string
 * @s1: String to be concatenated
 * @s2: String to be concatenated
 *
 * Description- Dynamically allocates memory in heap and saves and returns an
 * address pointer to concatenated strings from heap.
 *
 * Return: char pointer else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int str1size = _sizeof(s1);
	int str2size = _sizeof(s2);

	char *dynmemptr = (char *) malloc((sizeof(char) * (str1size + str2size)) + 1);

	if (dynmemptr == NULL)
		return (NULL);

	for (i = 0; i < str1size ; i++)
		dynmemptr[i] = *s1++;

	for (i = 0; i < str2size ; i++)
		dynmemptr[str1size + i] = *s2++;

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

