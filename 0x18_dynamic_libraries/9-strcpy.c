#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcpy- replicates the contents of an input string
 * @dest: destination string
 * @src: source string
 *
 * Description-Copies contents from source string to dst string
 * and returns pointer to the first element of the dest string
 *
 * Return: character pointer
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
