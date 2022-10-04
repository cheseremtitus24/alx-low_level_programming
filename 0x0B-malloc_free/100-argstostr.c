#include "main.h"

/**
 * argstostr- Concatenates all array arguments
 * @ac: Number of Commandline Arguments
 * @av: Arguments array pointer
 *
 * Description- concatenates array index values and returns a newline separated
 * string
 *
 * Return: char pointer else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, __attribute__((unused)) j, k, count;
	int total_strlen;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Get total Arg string lengths */
	for (i = 0; i < ac; i++)
	{
		/* additional 1 for the newline character */
		total_strlen += (_strlen_recursion(av[i]) + 1);

		/*printf("Arv %d is %s\n", i+1, av[i]);*/
	}

	s = (char *)malloc(sizeof(char) * total_strlen);
	count = 0;

	if (s == NULL)
		return (NULL);

	/* copying individual characters to our heap memory*/
	for (j = 0; (j < ac && count < total_strlen); j++)
	{
		for (k = 0; (av[j][k] != '\0' && count < total_strlen); k++)
		{
			s[count] = av[j][k];
			count++;

		}
		/* add new line character in place of '\0'*/
		s[count++] = '\n';
	}

	return (s);

}


/**
 * _strlen_recursion- prints length of a string
 * @s: input string
 *
 * Description- outputs the length of an input string
 *
 * Return: positive integer else 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

