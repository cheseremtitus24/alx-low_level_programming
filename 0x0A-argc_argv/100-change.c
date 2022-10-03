#include "main.h"
#include <stdio.h>

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
		printf("Error\n");
		return (1);
	}

	/* Parse string input to Integer*/
	amount = atoi(argv[1]);
	/*print_number(amount);*/

	/* Check that passed in amount value is > 0*/
	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}

	/* initialize counter to 0*/
	counter = 0;
	i = 0;

	while (i < (int)(sizeof(denominations) / sizeof(int)))
	{
		while (amount >= denominations[i])
		{
			counter++;
			amount -= denominations[i];
		}
		i++;
	}
	printf("%d\n", counter);
	/*print_number(counter);*/
	/*_putchar('\n');*/
	return (0);
}
