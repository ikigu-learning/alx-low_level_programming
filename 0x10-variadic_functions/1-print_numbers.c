#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers passed as args
  * @separator: string to print btwn numbers
  * @n: number of integers passed to function
  *
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j;
	int first_arg;

	va_start(args, n);

	first_arg = va_arg(args, int);
	j = 0;

	for (i = first_arg; j < n; j++, i = va_arg(args, int))
	{
		printf("%d", i);

		if (separator && j != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}

