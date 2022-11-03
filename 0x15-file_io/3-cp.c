#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#define BUFFSIZE 1024

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int createfile(const char *filename, char *text_content);
ssize_t readtextfile(const char *filename, size_t letters, char** fcontents);
int main(int ac, char **av)
{
    int res, validateread, ed, counter, wd, i;
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
    while(counter)
    {
	    validateread = readtextfile(av[1], BUFFSIZE, &filecontents);
	    if (validateread < 0)
	    {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	    }
	    /* We are still reading in file contents*/
	    else
	    {
		    /* write contents to other file*/
		    /* if counter is 1 initially create the file*/
		    if (counter == 1)
		    {
			    //dprintf(STDOUT_FILENO, "We are about to write to %s", av[1]);
			    wd = createfile(av[2], filecontents);
			    //wd = create_file(av[2], "World");
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



    /*res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    */
    return (0);
}
/**
 * read_textfile- Function reads in a text file and outputs it to POSIX stdout  
 * @filename: Pointer to file to be read
 * @letters: number of characters to read and print
 *
 * Description - reads and returns the number of characters
 * it could read and print
 *
 * Return: an absolute value of an integer
 */

ssize_t readtextfile(const char *filename, size_t letters, char** fcontents)
{
	char *buf;
	ssize_t actualread, fd, sout;


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
	/* Handle if there were errors while reading */
	if (actualread < 0)
	{
		free(buf);
		return (0);
	}
	close(fd);
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


	/* Handle case when file pointer is null*/
	if (!filename)
	{
		return (-1);
	}
	/* write truncate if exists create if non existent*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd < 0)
	{
		return (-1);
	}

	if (!text_content)
	{
		t = write(fd, "", 1);
		if (t < 0)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		t = write(fd, text_content, strlen(text_content));
		if (t < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
