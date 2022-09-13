#include "main.h"
#include <stdio.h>
#include <unistd.h>


/**
 * print_times_table - Function prints multiplication table
 * @n: specific value to generate multiplication table
 *
 * Description - Prints multiples of specified number
 * Return: void
 */

void
print_times_table (int n)
{
  int row, column, indexer, first, lmid, fmid, mid, last = 0;
  int counter;
  int asciilookup[10];
  int hlval = 0;
  counter = hlval;

  for (counter = 48; counter <= 57; counter++)
    {
      asciilookup[indexer] = counter;
      indexer++;
    }
  

  for (row = 0; row <= n; row++)
    {
      for (column = 0; column <= n; column++)
	{
	  int multiply = row * column;
	  if (multiply > 999)
	    {
	      extractQuadNums (multiply, &first, &fmid, &lmid, &last);
	      _putchar (asciilookup[first]);
	      _putchar (asciilookup[fmid]);
	      _putchar (asciilookup[lmid]);
	      _putchar (asciilookup[last]);

	    }
	  else if (multiply > 99 && multiply <= 999)
	    {

	      extractTriNums (multiply, &first, &mid, &last);
	      _putchar (asciilookup[first]);
	      _putchar (asciilookup[mid]);
	      _putchar (asciilookup[last]);
	    }
	  else if (multiply > 9 && multiply <= 99)
	    {
	      extractBiNums (multiply, &first, &last);
	      _putchar (asciilookup[first]);
	      _putchar (asciilookup[last]);
	    }
	  else if (multiply >= 0 && multiply <= 9)
	    {
	      int hlval = multiply % 10;	/* Gets the last digit */
	      /*int hfval = multiply / 10;  Gets the first digit */
	      if (column != 0)
		{
		  _putchar (' ');
		}
	      _putchar (asciilookup[hlval]);

	    }

	  if (column != n)
	    {
	      _putchar (',');
	      _putchar (' ');
	    }
	}
      _putchar ('\n');
    }
}

/**
 * extractQuadNums- Function captures individual digits making a number
 * @x: a number between 100 & 999
 * @first: the thousands digit
 * @lmid: the hundreds digit
 * @fmid: the tenths digit
 * @last: the one's digit
 *
 * Description - capture the ones tenths and hundreds digits of a number
 * Example extractQuadNums(9687,first,fmid,lmid,last) --> 9, 6, 8, 7
 * Return: void
 */
void
extractQuadNums (int x, int *first, int *fmid, int *lmid, int *last)
{
  while (x >= 10)
    {
      if (x > 999)
	{
	  *last = x % 10;	/* Gets last digit */
	}
      x = x / 10;		/* Gets the first digit */
      /* Middle value */
      if (x > 10)
	{
	  *fmid = x % 10;
	}
      if (x > 99)
	{

	  *lmid = x % 10;
	}
    }
  *first = x;

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
extractTriNums (int x, int *first, int *mid, int *last)
{
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
extractBiNums (int x, int *first, int *last)
{

  while (x >= 10)
    {
      *last = x % 10;		/* Gets last digit */
      x = x / 10;		/* Gets the first digit */
    }
  *first = x;
}
