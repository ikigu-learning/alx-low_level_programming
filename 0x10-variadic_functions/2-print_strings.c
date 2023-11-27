#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings passed as args
  * @separator: string to print btwn the strings
  * @n: number of strings passed to function
  *
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *first_arg, *i;

	va_start(args, n);

	first_arg = va_arg(args, char*);
	j = 0;

	for (i = first_arg; j < n; j++, i = va_arg(args, char*))
	{
		if (i)
		{
			printf("%s", i);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && j != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}

