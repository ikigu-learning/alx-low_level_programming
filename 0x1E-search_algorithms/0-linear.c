#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints using linear search
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index where value is located
 * or -1 if array is NULL or value not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		i++;
	}

	return (-1);
}
