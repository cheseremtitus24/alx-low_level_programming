#include "main.h"
#include <string.h>
/**
 * _strcmp- Compares 2 strings for equality
 * @s1: string to compare against
 * @s2: string to compare to
 *
 * Description- Copies string contents of src to dest for a specified length.
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, result = 0;
	int s2_len = strlen(s2);

	for (i = 0 ; s1[i] != '\0'; i++)
	{
		result = (s1[i] - s2[i]);
		if (result != 0)/* handles "A","b"*/
		{
			return (result);
		}
		else
		{
			continue;
		}

	}
	if (i < s2_len)/*handles "A" "Ab"*/
		return (result - s2[i]);
	return (0);/*handles "A" "A"*/

}

