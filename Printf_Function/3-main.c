#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	int result, (*op)(int, int);

	result = 0;

	if (argc == 4)
	{
		/* Operator check */
		if (strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 ||
		strcmp(argv[2], "*") == 0)
		{
		}
		else if (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
		{
			if (atoi(argv[3]) > 0)
			{
			}
			/* Divide/modulo by zero*/
			else
			{
				printf("Error\n");
				return (100);
			}
		}
				/* Invalid operator provided*/
		else
		{
			printf("Error\n");
			return (99);
		}
	}
	else
	{
		printf("Error\n");
		return (98);
	}
	/* Evaluating Expression */
	op = get_op_func(argv[2]);
	result = op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
