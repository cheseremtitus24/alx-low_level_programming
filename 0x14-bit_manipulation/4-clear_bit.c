#include "main.h"

/**
 * clear_bit- sets a bit to zero at provided index
 * @n: Integer pointer to number to be bit modified
 * @index:  - Bit index to clear the binary bit
 *
 * Return: positive integer else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = ((*n & ~mask) | (0 << index));
	return (1);
}

