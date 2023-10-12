#include "main.h"

/**
  * more_numbers - prints 0-14 ten times
  */

void more_numbers(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		while (y < 15)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
			y++;
		}

		_putchar('\n');
		x++;
		y = 0;
	}
}
