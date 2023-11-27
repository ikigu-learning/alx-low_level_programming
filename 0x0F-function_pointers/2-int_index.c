#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: an array
  * @size: size of array
  * @cmp: a function to compare values
  *
  * Return: index of first elem which cmp doesn't return 0,
  * -1 if no element matches or if size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0 || !cmp || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);

		if (j != 0)
		{
			return (i);
		}
	}

	return (-1);
}
