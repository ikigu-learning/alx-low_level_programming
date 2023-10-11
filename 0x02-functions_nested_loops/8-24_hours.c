#include "main.h"

/**
  * minutes - increments minutes from 00 to 59
  */

void minutes(int m, int mm, int h, int hh)
{
	while (m < 54)
	{
		_putchar(h);
		_putchar(hh);
		_putchar(':');
		_putchar(m);
		_putchar(mm);

		if (mm == 57 && m == 53)
		{
			break;
		}
		else if (mm < 57)
		{
			mm++;
		}
		else if (mm == 57 && m < 54)
		{
			mm = 48;
			m++
		}
	}
}

/**
  * hours - increments hours from 00 to 20
  */

void hours(int m, int mm, int h, int hh)
{
	while (h < 51)
	{
		minutes();

		if (hh == 57 && h == 48)
		{
			break;
		}
		else if (hh < 57)
		{
			hh++;
		}
		else if (hh == 57 && h < 51)
		{
			hh = 48;
			h++;
		}
	}
}

/**
  * hourse21_21 - increments hours from 21 to 23
  */

void hours21_23(void)
{
	while (hh < 52)
	{
		minutes();
		hh++;
	}
}

/**
  * jack_bauer - calculates the number of minutes in JB's day
  */
void jack_bauer(void)
{
	int m = 48;
	int mm = 48;
	int h =48:
	int hh =48;

	hours(m, mm, h, hh);
	h++;
	hours21_21(m, mm, h, hh);
}
