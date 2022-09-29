#include "main.h"

/**
 * is_palindrome- helper function that checks if an input
 * string is a palindrome
 * @s: input string to check
 *
 * Description: Checks if an input string is a palindrome
 *
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
	int len;
	int start_index;
	int reversing_index;

	len = _strlen_recursion(s);
	start_index = 0;
	reversing_index = 1;

	return (checkPalindrome(s, start_index, reversing_index, len));
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

/**
 * checkPalindrome- checks if an input string is a palindrome
 * @str: input string to check
 * @f: integer that tracks and increments the starting index
 * @b: integer that tracks and increments the ending index until it converges
 * @len: Holds the reference to string length.
 *
 * Description: Checks if an input string is a palindrome
 * Ref: https://betterprogramming.pub/algorithms-101-palindromes-8a06ea97af86
 *
 * Return: 1 if true else 0
 */

int checkPalindrome(char *str, int f, int b, int len)
{
	if ((len - b) == 0 || (len - b) == 1)
		return (1);
	if (str[f] == str[len - b])
	{
		/* reposition the str pointer*/
		return (checkPalindrome(str, f += 1, b += 1, len));
	}
	else
		return (0);
}


