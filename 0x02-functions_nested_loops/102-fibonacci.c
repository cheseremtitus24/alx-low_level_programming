#include <stdio.h>
/**
* fibonacci- prints fibonacci numbers
* @n: number of fibonacci numbers
*
* Description- prints fibonacci number starting from 1 2
* Return: 0 always
*/
void fibonacci(unsigned int n)
{
	unsigned long int pprev = 0;
	unsigned long int prev = 1;
	unsigned long int i;
	unsigned long int display;

	for (i = 0; i < n; i++)
	{
		display = pprev + prev;
		pprev = prev;
		prev = display;
		if (i == (n - 1))
		{
			printf("%ld", display);
			continue;
		}
		printf("%ld, ", display);
	}
}
/**
* main - Entry Point
*
* Description-Calls a function that prints the first n
* fibonacci numbers
* Return: 0 always
*/

int main(void)
{
	fibonacci(50);
	printf("\n");
}

