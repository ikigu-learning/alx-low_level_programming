#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - returns sum of all its parameters
  * @n: first parameter
  *
  * Return: sum or 0 if n == 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j, sum;

	if (n == 0)
		return (0);

	sum = 0;
	j = 0;

	va_start(args, n);

	for (i = n; j <= n; j++, i = va_arg(args, unsigned int))
	{
		sum += i;
	}

	va_end(args);

	return (sum - n);
}
