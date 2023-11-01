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
	int i, j, **grid;

	if (width < 1 || height < 1)
		return (0);

	grid = (int **)malloc(sizeof(int));

	if (!grid)
		return(0);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (!grid[i])
			return (0);
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
