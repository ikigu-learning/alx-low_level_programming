#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2D array of ints
  * @width: the width of the array
  * @height: the height of the array
  *
  * Return: pointer to the array, NULL on failure
  * or if either height or width is NULL
  */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width < 1 || height < 1)
		return (0);

	array = malloc(sizeof(**array) * height);

	if (!array)
	{
		free(array);
		return (0);
	}

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(array[i]) * width);

		if (!array[i])
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
