#include "main.h"
/**
 * print_most_numbers - prints integers from 0 to 9
 * except 2 and 4
 *
 * Description - Function implements the use of write to output
 * character-integer mappings using ASCII Table.
 * Return: void
 */
void print_most_numbers(void)
{
	unsigned char AsciiTable[10];
	int i;
	int count = 48;

	for (i = 0; i < 10; i++)
	{
		AsciiTable[i] = count++;
	}
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(AsciiTable[i]);
	}
	_putchar('\n');

}
