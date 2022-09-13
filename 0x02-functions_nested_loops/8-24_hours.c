#include "main.h"
#include <unistd.h>

/**
 * jack_bauer- Function prints time in '24' hour system
 *
 * Description - Prints time from midnight to a minute to midnight
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute, second;
	int counter = 48;
	int indexer = 0;
	int asciilookup[10];

	hour = minute = second =  0;
	for (; counter <= 57; counter++)
	{
		asciilookup[indexer] = counter;
		indexer++;
	}

	while (1)
	{
		/*print time in HH : MM format*/
		int hlval = hour % 10; /* Gets the last digit*/
		int hfval = hour / 10; /* Gets the first digit*/
		int mlval = minute % 10;
		int mfval = minute / 10;
		/* Convert the integer to its ascii equivalent for printing*/
		_putchar(asciilookup[hfval]);
		_putchar(asciilookup[hlval]);
		_putchar(':');
		_putchar(asciilookup[mfval]);
		_putchar(asciilookup[mlval]);
		_putchar('\n');
		/*increase second in intervals of 60 */
		second += 60;
		/*update hour, minute and second*/
		if (second == 60)
		{
			minute += 1;
			second = 0;
		}
		if (minute == 60)
		{
			hour += 1;
			minute = 0;
		}
		if (hour == 24)
		{
			hour = 0;
			minute = 0;
			second = 0;
		}
		sleep(60);              /*system sleep for 1 minute*/
		if (minute == 59 && hour == 23)
		{
			break;
		}
	}
}
