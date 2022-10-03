#include "main.h"

/**
 * main - Prints the minimum number of coin denominations to give as change.
 * @argc: number of commandline arguments
 * @argv: array that holds/stores individual commandline arguments
 *
 * Description - Finds the least number of coin denominations to give as change
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int counter;
	int amount;
	int i;
	int denominations[5] = {25, 10, 5, 2, 1};

	/* Handle number of number of arguments being other than exactly 1*/
	if (argc != 2)
	{
		_puts_recursion("Error");
		return (1);
	}

	/* Parse string input to Integer*/
	amount = _atoi(argv[1]);
	/*print_number(amount);*/

	/* Check that passed in amount value is > 0*/
	if (amount <= 0)
	{
		_puts_recursion("0");
		return (0);
	}

	/* initialize counter to 0*/
	counter = 0;
	i = 0;

	while (i < (sizeof(denominations) / sizeof(int)))
	{
		while (amount >= denominations[i])
		{
			counter++;
			amount -= denominations[i];
		}
		i++;
	}
	print_number(counter);
	_putchar('\n');


}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
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
/**
 * _puts_recursion- prints a newline terminated string
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
 * print_number - Prints an integer using recursion
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
