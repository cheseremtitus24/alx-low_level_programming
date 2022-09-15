#include <stdio.h>
/**
 * main - prints a Fizz and Buzz for numbers divisible by 3,5 respectively
 *
 * Description - counts from 1 - 100
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
			i == size ? printf("Fizz\n") : printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)
		{
			i == size ? printf("Buzz\n") : printf("Buzz ");
			continue;
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			i == size ? printf("FizzBuzz\n") : printf("FizzBuzz ");
			continue;
		}
		if (i == 1)
			printf(" ");
		i == size ? printf("%d\n", i) : printf("%d ", i);


	}
return (0);
}
