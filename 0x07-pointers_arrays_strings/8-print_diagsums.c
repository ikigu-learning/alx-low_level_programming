#include "main.h"

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
	size = size - 1;

	while (i < size)
	{
		sum_diag1 = sum_diag1 + a[i][i];
		i++;
	}

	while (size > 0)
	{
		sum_diag2 = sum_diag2 + a[size][size];
		size--;
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
