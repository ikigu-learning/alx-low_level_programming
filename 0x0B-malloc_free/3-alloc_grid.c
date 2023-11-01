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
	int i, j, w, *array, **grid;
	size_t size;

	if (width < 1 || height < 1)
		return (0);

	grid = (int **)malloc(sizeof(int));

	if (!grid)
		return(0);

	size = width * height;
	array = (int *)malloc(sizeof(int) * size);

	if (!array)
		return (0);

	w = 0;
	i = 0;

	while (i < height)
	{
		grid[i] = array + w;
		i++;
		w += width;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
