#include <stdio.h>
#include "main.h"

/**
  * print_array - prints n elements of array a
  * @a: array whose elements to print
  * @n: number of elements to print from a
  *
  * Return: Nothing
  */

void print_array(int *a, int n)
{
	int counter = 0;
	int integer_to_print;

	while (n < counter)
	{
		integer_to_print = *(a + counter);

		if (counter == (n - 1))
		{
			printf("%d", integer_to_print);
		}
		else
		{
			printf("%d, ", integer_to_print);
		}

		counter++;
	}

	putchar('\n');
}
