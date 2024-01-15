#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

int _putchar(int);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void cp(char *file_from, char *file_to);

void check_file_close_fail(int *close, int *fd);

void handle_write_error(char *filename);

void handle_read_error(char *filename);

#endif
