#include "main.h"
/**
 * set_string- set string pointer
 * @s: string pointer pointer
 * @to: string to point to
 *
 * Description- sets s pointer to point to address of to
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
