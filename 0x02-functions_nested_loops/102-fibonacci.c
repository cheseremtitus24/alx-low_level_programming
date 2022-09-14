#include <stdio.h>
/**
* fibonacci- prints fibonacci numbers
* @n: number of fibonacci numbers
*
* Description- prints fibonacci number starting from 1 2
* Return: 0 always
*/
void fibonacci(int n)
{
	unsigned long long int pprev = 0;
	unsigned long long int prev = 1;
	unsigned int i;
	unsigned long long int display;

	for (i = 0; i < n; i++)
	{
		display = pprev + prev;
		pprev = prev;
		prev = display;
		if (i == (n - 1))
		{
			printf("%lld", display);
			continue;
		}
		printf("%lld, ", display);
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

