#include "main.h"
#include <stdlib.h>

/**
  * array_range - allocates memory for an array
  * and initiliazes it with values min to max
  * @min: minimum value
  * @max: maximum value
  *
  * Return: pointer to the array on success,
  * NULL on failure
  */

int *array_range(int min, int max)
{
	int size, i, *ptr;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(size);

	if (!ptr)
		return (NULL);

	i = 0;

	while (i < size)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
