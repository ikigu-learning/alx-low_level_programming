#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>

/**
  * read_textfile - reads a text file and prints it to the standard output
  * @filename: the name of the file to read
  * @letters: the number of letters to read and print
  *
  * Return: number of bytes written
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes_read, bytes_written;
	char buffer[1024];

	int fd = open(filename, O_RDONLY);
	int error = -1; 

	if (!filename || fd == error)
		return (0);

	bytes_read = read(fd, buffer, sizeof(buffer));
	close(fd);

	if (bytes_read <= 0)
		return (0);
	
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == (size_t)(-1))
		return (0);

	return (letters);
}
