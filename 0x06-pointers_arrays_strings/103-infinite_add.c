#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add- Sums two integer values
 * @n1: Integer to sum up
 * @n2: Integer to sum up
 * @r: buffer to save results
 * @size_r: buffer size
 *
 * Description- The result of summation is saved to r-buffer
 *
 * Return- positive char integer array or 0 on error.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* perform addition then compare size_r to result of addition */
	int i, f, j, s1len, s2len, temp1, temp2, tmpsum, carry;
	int buff_checker;

	s1len = (int)strlen(n1);
	s2len = (int)strlen(n2);
	carry = 0;
       	buff_checker = 0;

	if (s2len >= size_r || s1len >= size_r)
	{
		return (0);
	}

	/* try to get size of pointer to char */

	/*printf("Size of char from pointer is %ld",strlen(n1));*/
	for (i = (s1len - 1), j = (s2len - 1); i >= 0 && j >= 0; i--, j--)
	{
		temp1 = (int)(n1[i] - '0');
		temp2 = (int)(n2[j] - '0');
		tmpsum = (int)(temp1 + temp2 + carry);
		/* reset carry to 0 */
		carry = 0;
		if (tmpsum > 9)
		{
			carry = 1;
			tmpsum = tmpsum % 10;
		}
		/* increment buffer checker to ensure answer fits in target*/
		if (buff_checker > (size_r - 1))
		{
			/* result can't be stored in r thus return 0*/
			return (0);
		}
		r[buff_checker] = (int)(tmpsum + '0');
		buff_checker++;
	}

	/* handle '1234' + '12'*/
	for ( ; i >= 0; i--)
	{
		if (buff_checker >= (size_r - 1))
		{
			/* result can't be stored in r thus return 0*/
			return (0);
		}
		temp1 = (int)((n1[i] - '0') + carry);
		/* reset carry variable to 0*/
		carry = 0;
		if (temp1 > 9)
		{
			carry = 1;
			temp1 = temp1 % 10;
		}
		r[buff_checker] = (int)(temp1 + '0');
		buff_checker++;
	}

	for ( ; j >= 0; j--)
	{
		if (buff_checker >= (size_r - 1))
		{
			/* result can't be stored in r thus return 0*/
			return (0);
		}
		temp2 = (int)((n2[j] - '0') + carry);
		/* reset carry variable to 0*/
		carry = 0;
		if (temp2 > 9)
		{
			carry = 1;
			temp2 = temp2 % 10;
		}
		r[buff_checker] = (int)(temp2 + '0');
		buff_checker++;
	}

	if(carry > 0)
	{

		if (buff_checker >= (size_r - 1))
		{
			/* result can't be stored in r thus return 0*/
			return (0);
		}
		r[buff_checker] = (int)(carry + '0');
		carry = 0;

	}
	/*reverse the array */
	for (f = 0; r[f] != '\0'; f++)
	{
		/*printf("%d ",r[f]);*/
		if (r[f] > 57)
		{
			r[f] = '\0';
		}
	}	
	reverse_char_array(r, buff_checker + 1);
	return (r);

}

/**
 * reverse_char_array- Reverses an array between
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

void reverse_char_array(char *a, int n)
{
	int i, j, tmp;

	if (n <= 0)
	{
		exit(EXIT_SUCCESS);
	}

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
	a[n] = '\0';

}


