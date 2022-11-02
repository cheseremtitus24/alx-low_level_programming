#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file- Only appends content to a file
 * @filename: Pointer to file to be read
 * @text_content: NULL Terminated char array to write to file
 *
 *
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd;


	/* Handle case when file pointer is null*/
	if (!filename)
	{
		return (-1);
	}
	/* only append content to existing file */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	else
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
