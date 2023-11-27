#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

/**
 * cp - copies the contents of one file to another
 * @file_from: the file from which to copy
 * @file_to: the file to copy to
 *
 * Return: Nothing
*/

void cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, fd_from_closed, fd_to_closed;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_RDWR | O_TRUNC | O_CREAT, 0664);

	if (!fd_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	bytes_read = 1UL;

	while (bytes_read != 0)
	{
		bytes_read = read(fd_from, buffer, 1024);

		if (bytes_read == (long)-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == (long)-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	fd_from_closed = close(fd_from);

	if (fd_from_closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	fd_to_closed = close(fd_to);

	if (fd_to_closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return;
}


/**
 * main - entry to the program
 * @argc: number of args passed to the program
 * @argv: an array of strings passed as args to the program
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}
