#include "main.h"
/**
 * main- Takes in Commandline Arguments
 * @argc: number of commandline arguments
 * @argv: Vector array of commandline arguments
 *
 * Description- prints the executable's filename
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	int i;
	char *s = (*argv + 0);


	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
