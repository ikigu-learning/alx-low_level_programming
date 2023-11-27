#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

/**
  * create_file - creates a file and adds some text to it
  * @filename: the name of the file to read
  * @text_content: the content to write to the file
  *
  * Return: number of bytes written
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == (unsigned long)-1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
