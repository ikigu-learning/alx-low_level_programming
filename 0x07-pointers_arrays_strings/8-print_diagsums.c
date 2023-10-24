#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the
  * 2 diagonals of a square matrix
  * @a: the mother array
  * @size: the size of the square
  *
  * Return: Nothing
  */

void print_diagsums(int *a, int size)
{
	int sum_diag1;
	int sum_diag2;
	int i = 0;

	while (i < size)
	{
		sum_diag1 += *(a + (size * i + i));
		sum_diag2 += a[(i + 1) * (size - 1)];
		i++;
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
