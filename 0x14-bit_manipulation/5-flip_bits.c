#include "main.h"

/**
 * flip_bits- checks the OR of bits between two numbers and returns the
 * differences in bits
 * @n: starting number
 * @m: target number
 *
 * Return: positive integer else -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int disimilar_bits, temp, counter;
	int machine_bits = 64;

	disimilar_bits = n ^ m;
	counter = 0;

	while (machine_bits > 0)
	{
		temp = disimilar_bits >> machine_bits;
		/* keep a counter of changing bits only*/
		if (temp & 1)
			counter++;
		machine_bits--;
	}

	return (counter);
}

