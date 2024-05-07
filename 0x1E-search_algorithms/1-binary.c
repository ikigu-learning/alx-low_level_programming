#include "search_algos.h"

/**
 * bsh - helps binary_search
 *
 * @array: array
 * @low: low
 * @high: high
 * @value: value
 *
 * Return: the index
*/

int bsh(int *array, int low, int high, int value)
{
	int mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);

		if (i != high)
		{
			printf(", ");
		}
	}

	printf("\n");

	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (bsh(array, mid + 1, high, value));
	else
		return (bsh(array, low, mid - 1, value));

}

/**
* binary_search - searches for a value in a sorted array of integers
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in @array
* @value: the value to search for
*
* Return: -1 if value not present or array is NULL,
* otherwise, index of value
*/

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (bsh(array, 0, size - 1, value));
}
