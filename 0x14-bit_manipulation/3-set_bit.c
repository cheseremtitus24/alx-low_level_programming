#include "main.h"
#include <stdio.h>
/**
 * get_bit- returns value of a bit at given index
 * @n: Input Decimal Number
 * @index: index of bit to retrieve
 *
 * Description: Indexing begins from zero
 *
 * Return: Value of bit at index else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int flag, counter, elapsed_bits, __attribute__((unused)) decimal;
	int i, indexes;
	char __attribute__((unused)) bits[32] = {0};

	/* initialize temp counter to zero*/
	elapsed_bits = 0;
	counter = 0;
	indexes = 0;

	if (index > 63)
		return (-1);


	/* Set a flag that will prevent printing of Leading zeroes*/
	flag = 0;
	if (*n == 0 && (int) index > indexes)
	{
		return (1);

	}
	/* assuming 32-bit integer*/
	for (i = 63; i >= 0; i--)
	{
		if (!flag)
			elapsed_bits++;
		counter++;


		/* calculate bitmask to check whether*/
		/* ith bit of num is set or not*/
		mask = (1 << i);

		/* ith bit of num is set*/
		if (*n & mask)
		{
			flag = 1;
			/* only counter forward once the flag is set to 1*/
			indexes = (counter - elapsed_bits);
			bits[indexes] = '1';
			/*_putchar('1');*/
		}
		else if (!(*n & mask) && flag)
		{
			indexes = (counter - elapsed_bits);
			bits[indexes] = '0';
			/*_putchar('0');*/
		}

	}
	for (counter = 0; counter < 32; counter++)
	{
		printf(" %c ", bits[counter]);
	}
	/* Reverse the array */
	reverse_array(bits, indexes);
	bits[index] = '1';
	if (indexes > (int) index)
		{
		reverse_array(bits, indexes);
		bits[indexes + 1] = '\0';
		decimal = binary_to_uint(bits);
		/*printf("%d",decimal);*/
		*n = decimal;
		return (1);
	}
	else
	{
		reverse_array(bits, index);
		bits[index + 1] = '\0';
		decimal = binary_to_uint(bits);
		/*printf("%d",decimal);*/
		*n = decimal;
		return (1);
	}


	/*return (1);*/
	/*else*/
		/*return (-1);*/
	printf("\nAfter switching the 5th bit\n");
	for (counter = 0; counter < 32; counter++)
	{
		printf(" %c ", bits[counter]);
	}
	return (0);

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

void reverse_array(char a[32], int n)
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

/**
 * binary_to_uint- Converts binary numbers to Decimal Numbers
 * @b: Input String
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, slen;
	unsigned int decimal = 0;
	unsigned int base2 = 1;

	slen = _strlen_recursion(b);
	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			decimal += base2;
		else if (b[i] != '0')
			return (0);
		base2 = base2 * 2;
	}

	return (decimal);
}
/**
 * _strlen_recursion- prints length of a string
 * @s: input string
 *
 * Description- outputs the length of an input string
 *
 * Return: positive integer else 0
 */

int _strlen_recursion(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


