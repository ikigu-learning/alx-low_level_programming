#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2D grid
  * @grid: pointer to the grid
  * @height: height of the grid
  *
  * Return: Nothing
  */

void free_grid(int **grid, int height)
{
	free(grid);
}
