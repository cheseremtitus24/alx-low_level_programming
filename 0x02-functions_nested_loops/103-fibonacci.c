#include <stdio.h>
#include <math.h>


/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	double b = 1;
	double temp = 0;
	double sumofEvens;
	double goldenRatio = (sqrt(5) + 1) / 2;

	for (; ; )
	{
		temp = round(b * goldenRatio);
		if (temp > 4000000)
		{
			printf("%.0f\n", sumofEvens);
			break;
		}
		if ((int) temp % 2 == 0) /*is even */
		{
			sumofEvens += temp;
		}

		b = temp;
	}
	return (0);
}

