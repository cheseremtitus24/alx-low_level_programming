#include "main.h"
/**
 * get_bit- returns value of a bit at given index
 * @n: Input Decimal Number
 * @index: index of bit to retrieve
 *
 * Description: Indexing begins from zero
 *
 * Return: Value of bit at index else -1 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, flag, counter, elapsed_bits;
	int i, indexes;
	char bits[63] = {0};

	/* initialize temp counter to zero*/
	elapsed_bits = 0;
	counter = 0;
	indexes = 0;

	if (index > 63)
		return (-1);

	/* handle if n is zero */
	if (n == 0)
	{
		if (counter == index)
		{
			return (0);
		}
		/*_putchar('0');*/
	}
	/* Set a flag that will prevent printing of Leading zeroes*/
	flag = 0;
	/* assuming 64-bit integer*/
	for (i = 63; i >= 0; i--)
	{
		if (!flag)
			elapsed_bits++;
		counter++;


		/* calculate bitmask to check whether*/
		/* ith bit of num is set or not*/
		mask = (1 << i);

		/* ith bit of num is set*/
		if (n & mask)
		{
			flag = 1;
			/* only counter forward once the flag is set to 1*/
			indexes = (counter - elapsed_bits);
			bits[indexes] = '1';
			/*_putchar('1');*/
		}
		else if (!(n & mask) && flag)
		{
			indexes = (counter - elapsed_bits);
			bits[indexes] = '0';
			/*_putchar('0');*/
		}

	}
	/* Reverse the array */
	reverse_array(bits, indexes );
	if (bits[index] == '1')
		return (1);
	else if (bits[index] == '0')
		return (0);
	else
		return (-1);

}
/**
 * reverse_array- Reverses an array between
 * starting and specified index
 * @a: array to be reversed
 * @n: array slice index to reverse
 *
 * Description- reverses an array based on provided index
 * Example:
 * int arr[5] = {1,2,3,4,5};
 * reverse_array(arr, 3) -> {3,2,1,4,5}
 *
 * Return: void
 */

void reverse_array(char a[63], int n)
{
	int i, j;
	char tmp;

	if (n <= 0)
	{
		return;
	}

	j = n;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
	
}

