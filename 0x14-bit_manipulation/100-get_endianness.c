#include "main.h"
/**
 * get_endianness- checks endianness of a machine /little/big endian
 * Return: 0 if big endian else 1
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return ((int) *c);
}
