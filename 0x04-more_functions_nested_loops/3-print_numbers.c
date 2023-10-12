#include "main.h"

/**
  * print_numbers - prints the digits 0-9
  */

void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
