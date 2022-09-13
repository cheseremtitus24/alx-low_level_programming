#include "main.h"

#include <string.h>

/**
  * main - Entry point of the Program
  *
  * Description: Prints the string _putchar and is end delimited by a new line
  *
  * Return: 0 always.
  */

int main(void)
{
	char *s = "_putchar\n";
	char slength = strlen(s);
	int counter = 0;

	for (; counter < slength; counter++)
	{
		_putchar(s[counter]);
	}

	return (0);
}
