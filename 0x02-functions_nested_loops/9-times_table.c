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

			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res) + '0');
			}

			if (d < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}

			d++;
		}

		m++;
		d = 0;
	}
}

