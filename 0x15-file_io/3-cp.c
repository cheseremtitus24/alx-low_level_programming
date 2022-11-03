#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#define BUFFSIZE 1024

int createfile(const char *filename, char *text_content);
ssize_t readtextfile(const char *filename, size_t letters, char **fcontents);
/**
 * main - check the code
 * @ac: Holds the number of passed in arguments
 * @av: Is an array that holds individual arguments
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int validateread, counter, wd;
	char *filecontents;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	/**
	* step 1 : read contents of file to malloc memory
	* step 2 : overwrite contents of to-file
	*/
	counter = 1;
	while (counter)
	{
		validateread = readtextfile(av[1], BUFFSIZE, &filecontents);
		if (validateread < 0)
		{
			return (98);
		}
		/* We are still reading in file contents*/
		else
		{
			/* write contents to other file*/
			/* if counter is 1 initially create the file*/
			if (counter == 1)
			{
				/*dprintf(STDOUT_FILENO, "We are about to write to %s", av[1]);*/
				wd = createfile(av[2], filecontents);
				/*wd = create_file(av[2], "World");*/
				/* successful Write*/
				if (wd == 1)
				{
					free(filecontents);
					return (0);
				}
				else
				{
					free(filecontents);
					/*failed to write thus return 99*/
					return (99);
				}

			}

		}
		/* increment counter*/
		counter++;
	}

	return (0);
}
/**
 * readtextfile- Function reads in a text file and outputs it to POSIX stdout
 * @filename: Pointer to file to be read
 * @letters: number of characters to read and print
 * @fcontents: NULL Terminated String to write to out file
 *
 * Description - reads and returns the number of characters
 * it could read and print
 *
 * Return: an absolute value of an integer
 */

ssize_t readtextfile(const char *filename, size_t letters, char **fcontents)
{
	char *buf;
	ssize_t actualread, fd;
	int status;


	/* Handle case when file pointer is null*/
	if (!filename)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	/* read */
	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	buf = malloc(letters);
	/* handle if dynamic memory allocation fails*/
	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	actualread = read(fd, buf, letters);
	/* Handle if there were errors while reading */
	if (actualread < 0)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		status = close(fd);
		if (status < 0)
		{

			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", status);
			exit(100);
		}
		exit(98);
	}
	status = close(fd);

	if (status < 0)
	{

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", status);
	}
	buf[letters] = '\0';
	*fcontents = buf;
	return (actualread);
}
/**
 * createfile- creates a new file in every invocation
 * @filename: Pointer to file to be read
 * @text_content: NULL Terminated char array to write to file
 *
 *
 * Return: 1 on success else -1
 */

int createfile(const char *filename, char *text_content)
{
	ssize_t fd, t;
	int status;

	t = -1;


	/* Handle case when file pointer is null*/
	if (!filename)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
	/* write truncate if exists create if non existent*/

	/* if file exists do not change permissions*/
	if (access(filename, F_OK) == 0)
	{
		/* file exists*/
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0664);
	}
	else
	{
		/* file doesn't exist*/
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	}

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}

	/* if text content to write is NULL write nothing to file*/
	if (!text_content)
	{
		t = write(fd, "", 1);
		if (t < 0)
		{
			status = close(fd);
			if (status < 0)
			{

				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", status);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
			exit(99);
		}
	}
	else
	{
		/* Use a loop to ensure all content is written to destination*/
		t = write(fd, text_content, strlen(text_content));
		if (t < 0)
		{
			status = close(fd);
			if (status < 0)
			{

				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", status);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
			exit(99);
		}
	}

	status = close(fd);
	if (status < 0)
	{

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", status);
		exit(100);
	}

	return (1);
}
