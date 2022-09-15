#include <stdio.h>
/**
 * print_square - prints a square
 * @size: number of times to print a square
 *
 * Description - Function implements the use of write to output
 * character-integer mappings using ASCII Table.
 * Return: void
 */

int main(void)
{
	int i;
	int size = 100;


	for (i = 1; i <= size; i++)
	{
		if (i % 3 == 0)
		{
			if(i == size)
			{
				printf("Fizz\n");
			}
			else
			{
				printf("Fizz ");
			}
			continue;
		}
		else if (i % 5 == 0)
		{
			if(i == size)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
			continue;
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			if(i == size)
			{
				printf("FizzBuzz\n");
			}
			else
			{
				printf("FizzBuzz ");
			}
			continue;
		}
		
			if(i == size)
			{
				printf("%d\n",i);
			}
			else
			{
				printf("%d ",i);
			}


	}

}
