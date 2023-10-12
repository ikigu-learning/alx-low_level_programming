#include "main.h"

/**
  * print_line - prints a line a certain number of times
  * @n: the number of times to print the lin
  *
  */

void print_line(int n)
{
	int x = 0;

	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{

		while (x < n)
		{
			_putchar('_');
			x++;
		}

		_putchar('\n');
	}
}

