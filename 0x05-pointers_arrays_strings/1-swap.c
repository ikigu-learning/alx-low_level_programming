#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: one of the integers
  * @b: the other integer
  *
  * Return: Nothing
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}

