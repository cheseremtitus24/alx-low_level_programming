#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Programs prints out a string using write
 * the *str pointer initializes the string to be passed
 * and then iterates through it to capture the string length
 * The string length is the passed in as a parameter to the write
 * function that will print out the string.
 * Example:
 * char str[] = "hello";
 * int strlen = 5;
 * write(1,str,5);
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	write(1, str, i);

	return (0);
}
