#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>

/**
  * read_textfile - reads a text file and prints it to the standard output
  * @filename: the name of the file to read
  * @letters: the number of letters to read and print
  *
  * Return: number of bytes written
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	char *buffer;

	int fd = open(filename, O_RDONLY);

	if (!filename || fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	bytes_read = read(fd, buffer, letters);
	close(fd);

	if (bytes_read <= 0)
	{
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (bytes_read);
}
