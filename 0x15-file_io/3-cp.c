#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_file_close_fail - handles file closing error
 * @close: pointer to the value returned by close function
 * @fd: pointer to the value of file descriptor
 *
 * Return: Nothing
*/

void check_file_close_fail(int *close, int *fd)
{
	if (*close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd);
		exit(100);
	}
}

/**
 * handle_read_error - handles read errors if any
 * @filename: the file we're trying to read
 *
 * Return: Nothing
*/

void handle_read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * handle_write_error - handles write errors
 * @filename: name of file we're trying to write to
 *
 * Return: Nothing
*/

void handle_write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}


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

	mode_t permissions = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (!file_from)
		handle_read_error(file_from);

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		handle_read_error(file_from);

	fd_to = open(file_to, O_RDWR | O_TRUNC | O_CREAT, permissions);

	if (fd_to == -1)
		handle_write_error(file_to);

	bytes_read = 1UL;

	while (bytes_read != 0)
	{
		bytes_read = read(fd_from, buffer, 1024);

		if (bytes_read == (long)-1)
			handle_read_error(file_from);

		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == (long)-1)
			handle_write_error(file_to);
	}

	fd_from_closed = close(fd_from);
	check_file_close_fail(&fd_from_closed, &fd_from);

	fd_to_closed = close(fd_to);
	check_file_close_fail(&fd_to_closed, &fd_to);
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
