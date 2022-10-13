#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
int evaluate(int a, char* op, int b);
/**
 * main- Takes in Commandline Arguments and prints their sum
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
	char operators[] = {'+', '-', '*', '/', '%'};

	result = 0;

	if (argc == 1)
	{
		_puts_recursion("0");
		return (0);
	}
	/* Checks passed in arguments */
	if (argc == 4)
	{

		/* Operator check */
		if (strcmp(argv[2],"+") == 0 ||strcmp(argv[2],"-") == 0 || strcmp(argv[2],"*") == 0 )
		{
			/* doing nothing */
		}
		else if (strcmp(argv[2],"/") == 0 || strcmp(argv[2], "%") == 0)
		{
			if (_atoi(argv[3]) > 0)
			{
			}
			/* Divide/modulo by zero*/
			else
			{
				_puts_recursion("Error");
				return (100);

			}
		}
				/* Invalid operator provided*/
		else
		{
			_puts_recursion("Error");
			return (99);
			
		}
	}
	/* Invalid number of commandline arguments provided */
	else
	{
		_puts_recursion("Error");
		return (98);
	}
	
	/* Evaluating Expression */
	/* function to process the results */
	/* function is passed in with param 1 (int)  and param 2 (operator) and param 3 (operator) */ 
	/*int evaluate(int a, char* op, int b);*/

	result = evaluate(_atoi(argv[1]),argv[2], _atoi(argv[3]));


	print_number(result);
	_putchar('\n');

	return (0);
}
int evaluate(int a, char* op, int b)
{
	if (strcmp(op,"+") == 0)
		return (a + b);
	if (strcmp(op,"-") == 0)
		return (a - b);
	if (strcmp(op,"*") == 0)
		return (a * b);
	if (strcmp(op,"/") == 0)
		return (a / b);
	if (strcmp(op,"%") == 0)
		return (a % b);
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
