#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile- Function that checks if a character is lowecase
 * @filename: Pointer to file to be read
 * @letters: number of characters to read and print
 *
 * Description - reads and returns the number of characters
 * it could read and print
 *
 * Return: an absolute value of an integer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t actualread, fd;


	/* Handle case when file pointer is null*/
	if (!filename)
	{
		return (0);
	}
	/* read */
	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
	}

	buf = malloc(letters);
	/* handle if dynamic memory allocation fails*/
	if (!buf)
		return (0);
	actualread = read(fd, buf, letters);
	close(fd);

	buf[letters] = '\0';
	printf("%s\n", buf);
	free(buf);

	return (actualread);



}
