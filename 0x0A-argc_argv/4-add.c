#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/**
 * main- Takes in Commandline Arguments
 * @argc: number of commandline arguments
 * @argv: Vector array of commandline arguments
 *
 * Description- prints the executable's filename
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int result;

	result = 0;

	if (argc < 3)
	{
		_puts_recursion("Error");
		return (1);
	}



	for (i = 1; i < argc; i++)
	{
		result += _atoi(argv[i]);
	}
	print_number(result);
	_putchar('\n');

	return (0);
}
/**
 * _puts_recursion- prints a string
 * @s: string to print
 *
 * Description- outputs a string using recursive calls
 * to function _puts_recursion(s)
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);

}


/**
 * print_number - Prints an integer as a char array using recursion
 * @n: Integer to print
 * Return - void
 */
void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		temp = -n;
		_putchar('-');
	}
	else
	{
		temp = n;
	}
	if (temp / 10) /* Captures the first digit */
	{
		print_number(temp / 10);
		/* Recursively call function to print e.g 1024 - 102 - 10 - 1*/
	}
	_putchar((temp % 10) + '0');
	/* grabs the first digit of a number */
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
	/* handle INT_MIN & INT_MAX*/
	return (number * -1);

}
