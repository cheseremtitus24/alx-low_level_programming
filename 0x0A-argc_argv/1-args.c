#include "main.h"
/**
 * main- Takes in Commandline Arguments
 * @argc: number of commandline arguments
 * @argv: Vector array of commandline arguments
 *
 * Description- prints the executable's passed in command
 * line arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused))  char **argv)
{
	print_number(argc - 1);
	_putchar('\n');
	return (0);
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
