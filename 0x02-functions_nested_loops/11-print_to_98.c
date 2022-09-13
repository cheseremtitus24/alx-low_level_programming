#include "main.h"
#include <stdlib.h>

/**
 * print_to_98- Function counts up and down to 98
 * @n: integer value to start from
 *
 * Description - counts to 98 either in ascending or descending
 * order based on whether the n is larger or smaller than 98.
 * Example print_to_98(96) --> 96, 97, 98
 * print_to_98(102) --> 102, 101, 100, 99, 98
 * Return: void
 */

void
print_to_98(int n)
{
  int row, column;
  int counter = 48;
  int indexer = 0;
  int asciilookup[10];
  int first, mid, last = 0;

  for (; counter <= 57; counter++)
    {
      asciilookup[indexer] = counter;
      indexer++;
    }

  if (n == 98)
    {
      extractBiNums(n, &first, &last);
      _putchar (asciilookup[first]);
      _putchar (asciilookup[last]);

    }
  else if (n > 98)
    {
      for (count = n; count >= 98; count--)
	{
	  if (count <= 99)	/*values less than but equal to 99 */
	    {
	      extractBiNums(count, &first, &last);
	      _putchar (asciilookup[first]);
	      _putchar (asciilookup[last]);

	      if (count == 98)
		continue;
	      else
		{
		  _putchar (',');
		  _putchar (' ');

		}
	    }
	  else			/* values greater than 99 */
	    {
	      extractTriNums(count, &first, &mid, &last);
	      if (count == 100)
		{
		  last = 0;
		}
	      _putchar(asciilookup[first]);
	      _putchar(asciilookup[mid]);
	      _putchar(asciilookup[last]);
	      _putchar(',');
	      _putchar(' ');

	    }
	}
    }
  else				/* number is less that 98 */
    {

      for (count = n; count <= 98; count++)
	{
	  if (count <= -100)
	    {
	      extractTriNums(abs(count), &first, &mid, &last);
	      if (count == -100)
		{
		  last = 0;
		}
	      _putchar('-');
	      _putchar(asciilookup[first]);
	      _putchar(asciilookup[mid]);
	      _putchar(asciilookup[last]);
	      _putchar(',');
	      _putchar(' ');
	    }
	  else			/* Value of count is greater -100 */
	    {
	      extractBiNums(abs(count), &first, &last);
	      if (count < 0)
		_putchar('-');
	      _putchar(asciilookup[first]);
	      if (count <= 0 && count > -10 || count > 0 && count < 10)
		{
		  _putchar(',');
		  _putchar(' ');

		}
	      else
		{
		  _putchar(asciilookup[last]);
		  if (count == 98)
		    continue;
		  else
		    {
		      _putchar(',');
		      _putchar(' ');

		    }

		}

	    }

	}
    }
  _putchar('\n');

}

/**
 * extractTriNums- Function captures individual digits making a number
 * @x: a number between 100 & 999
 * @first: the hundreds digit
 * @mid: the tenths digit
 * @last: the one's digit
 *
 * Description - capture the ones tenths and hundreds digits of a number
 * Example extractTriNums(968,first,mid,last) --> 9, 6, 8
 * Return: void
 */
void
extractTriNums(int x, int *first, int *mid, int *last)
{
  int temp;
  while (x >= 10)
    {
      if (x > 100)
	{
	  *last = x % 10;	/* Gets last digit */

	}
      x = x / 10;		/* Gets the first digit */
      if (x >= 10)
	{
	  *mid = x % 10;
	}
    }
  *first = x;
}

/**
 * extractBiNums- Function captures individual digits making a number
 * @x: a number between 10 & 99
 * @first: the hundreds digit
 * @last: the one's digit
 *
 * Description - capture the ones tenths digits of a number
 * Example extractBiNums(96,first,last) --> 9, 6
 * Return: void
 */

void
extractBiNums(int x, int *first, int *last)
{

  int temp;
  while (x >= 10)
    {
      temp = x % 10;		/* Gets last digit */
      x = x / 10;		/* Gets the first digit */
    }
  *first = x;
  *last = temp;
}
