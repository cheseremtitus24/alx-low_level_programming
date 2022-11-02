#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * read_textfile- Function that checks if a character is lowecase
 * @filename: Pointer to file to be read
 * @text_content: NULL Terminated char array to write to file
 *
 *
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;


	/* Handle case when file pointer is null*/
	if (!filename)
	{
		return (-1);
	}
	/* write truncate if exists create if non existent*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
	{
		return (-1);
	}

	if (!text_content)
		write(fd,"",1);
	else
		write(fd, text_content, strlen(text_content));

	
	close(fd);

	return (1);
}
