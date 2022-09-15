#include "main.h"

/**
* positive_or_negative - tests function that prints if
* integer is positive or negative
* @i: Number to be checked
* Description - performs assert test for zero
* Return: void
*/

void positive_or_negative(int i)
{
	if (i == 0)
	{
		assert(i == 0);
		printf("%d is zero\n", i);
	}
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
