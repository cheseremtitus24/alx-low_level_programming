#include <stdio.h>
#include <math.h>


/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	double a = 0;
	double b = 1;
	double temp = 0;
	double goldenRatio = (sqrt(5) + 1) / 2;

	for (; i < 50; i++)
	{
		if (i == 0)
		{
		/*printf("%.0f ",a);*/
		/*printf("%.0f ",b); */
		printf("%.0f, ", b);
		}
		temp = b * goldenRatio;

		b = temp;
		if (i == 49)
		{
			printf("%.0f", temp);
		}
		else
		{
			printf("%.0f, ", temp);
		}
	}
	return (0);
}

