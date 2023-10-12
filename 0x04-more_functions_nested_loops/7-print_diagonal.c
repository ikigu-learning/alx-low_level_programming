#include "main.h"

/**
  * spaces - writes a number of spaces
  * @n: The number of spaces to be written
  *
  */

void spaces(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar(' ');
		x++;
	}
}

/**
  * print_diagonal - prints a digonal of n lines
  * @n: the length of the diagonal
  *
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = 0;

		while (x < n)
		{
			spaces(x);
			_putchar('\');
			x++;
		}
	}
}
