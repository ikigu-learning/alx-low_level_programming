#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints numbers, followed by a new line
 * @format: different data types
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i, j;
	char *abc;

	va_list args;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				j = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				j = 0;
				break;
			case 's':
				abc = va_arg(args, char *);
				if (abc == NULL)
					abc = "(nil)";
				printf("%s", abc);
					break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

