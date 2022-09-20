#include "main.h"
#include <stdlib.h> /* require for atoi usage*/
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
	/*char *s = "   -()3 323 "; atoi fails*/
	/**
	 * Capture only the first signed integer
	 * Retrieve an integer from char using
	 * putchar('3' - '0')
	 * int result = ('3' - '0');
	 * result is 3.
	 */
	/**
	 * putchar('3' - '0');
	 * int result = ('3' - '0');
	 * return (result);
	 */
	return (atoi(s));

}
