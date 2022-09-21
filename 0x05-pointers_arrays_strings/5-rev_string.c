#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - Outputs a string
 * @str: string to be reversed
 *
 * Description- returns a reversed string
 *
 * Return: void
 */
void rev_string(char *str)
{
	int i, j;
	char tmp;

	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	/*
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	*/
}
