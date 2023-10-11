#include "main.h"

/**
  * times_table - function that creates a 9x9 multiplication table
  */

void times_table(void)
{
	int m = 0;
	int d = 0;
	int res;

	while (m < 10)
	{
		while (d < 10)
		{
			res = m * d;

			if (res > 9 && d < 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (res < 9 && d < 9)
			{
				_putchar((res) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (res > 9 && d == 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				_putchar('\n');
			}
			else
			{
				_putchar((res) + '0');
				_puthchar('\n');

			d++;
		}

		m++;
		d = 0;
	}
}

