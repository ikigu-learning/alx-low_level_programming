#include "main.h"
#include "1-alphabet.c"

/**
  * print_alphabet_x10 - prints the alphabet in lowercase 10 times
  *
  */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		print_alphabet();
		j++;
	}

	_putchar('\n');
}
