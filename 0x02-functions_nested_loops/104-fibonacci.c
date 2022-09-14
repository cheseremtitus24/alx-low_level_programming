#include <stdio.h>
#include <math.h>


/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	double b = 1;
	double temp;
	/*double goldenRatio = (sqrt(5) + 1) / 2;*/

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
		{
		/*printf("%.0f ",a);*/
		/*printf("%.0f ",b); */
		printf("%.0f, ", b);
		}
		temp = round(b * ((sqrt(5) +1) / 2));

		b = temp;
		if (i == 97)
		{
			printf("%.0f\n", temp);
		}
		else
		{
			printf("%.0f, ", temp);
		}
	}
	return (0);
}

