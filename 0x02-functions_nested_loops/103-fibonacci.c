#include <stdio.h>
/**
* fibonacci- prints sum of even  fibonacci numbers
*
* Description- the fibonacci numbers must be below 4000000
* Return: 0 always
*/
void fibonacci(void)
{
	unsigned long int pprev = 0;
	unsigned long int prev = 1;
	unsigned long int sum = 0;
	unsigned long int display;

	for (; ; )
	{
		display = pprev + prev;
		pprev = prev;
		prev = display;
		if (display > 4000000)
		{
			break;
		}
		if ((display % 2) == 0)
		{

			sum += display;
		}
	}
	printf("%ld", sum);
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
	fibonacci();
	printf("\n");
	return (0);
}

