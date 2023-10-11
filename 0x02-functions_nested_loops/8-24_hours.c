#include "main.h"

/**
  * jack_bauer - prints every minute of the day of Jack Bauer
  *
  */

void jack_bauer(void)
{
	int m = 48;
	int mm = 48;
	int h = 48;
	int hh = 48;

	while (h < 53)
	{
		_putchar(h);
		_putchar(hh);
		_putchar(58);
		_putchar(m);
		_putchar(mm);
		_putchar('\n');

		if (mm < 57)
		{
			mm++;
		}
		else if (mm == 57 && m < 53)
		{
			mm = 48;
			m++;
		}
		else if (mm == 57 && m == 53 && hh < 57)
		{
			mm = 48;
			m = 48;
			hh++;
		}
		else if (mm == 57 && m == 53 && hh == 57 && h < 51)
		{
			mm = 48;
			m = 48;
			hh = 48;
			h++;
		}
	}
}
