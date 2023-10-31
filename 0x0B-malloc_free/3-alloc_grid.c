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
	int i, j, size;
	int array[][];

	if (width < 1 || height < 1)
	{
		return (0);
	}

	size = height * width;
	array = malloc(sizeof(int) * size);

	if (!array)
		return (0);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[j][i] = 0;
		}
	}

	return (array);
}
