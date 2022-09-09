#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Programs checks if a number is equal to zero,
 * greater that 5  or less than 6 and outputs the number and a
 * description string
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n, tens;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tens = n % 10;

	if (tens > 5)
	{
		printf("Last digit of %d is %d and is greather than 5\n", n, tens);
	}
	else if (tens == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, tens);
	}

	else if (tens < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tens);
	}

	/* your code goes there */
	return (0);
}
