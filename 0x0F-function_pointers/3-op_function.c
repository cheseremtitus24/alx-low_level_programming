#include "function_pointers.h"
/**
 * int_index- Searches for the index of a number in an array
 * @array: integer array
 * @size: number of elements in array
 * @cmp: pointer to a function that compares values
 *
 * Description: outputs index of an integer
 *
 * Return: an index of the first element for which the cmp function does not
 * return 0 else return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result_index = -1;

	/* invoke function on each and every element in array until condition is met*/

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			/* Result Found @ index i*/
			/* break from loop */
			result_index = i;
			break;
		}
	}
	/* handles case when not element matches */
	return (result_index);

}
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
	return (number * -1);

}

