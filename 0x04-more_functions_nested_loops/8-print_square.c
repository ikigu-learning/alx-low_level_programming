#include "main.h"

/**
  * print_square - prints a square of size n
  * @n: the size of the sqaure
  *
  */

void print_square(int n)
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
			int y = 0;

			while(y < n)
			{
				_putchar('#');
				y++;
			}

			_putchar('\n');
			x++;
		}
	}
}
