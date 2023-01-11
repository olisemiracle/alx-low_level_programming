#include "main.h"
/**
 * free_grid - frees 2D array
 * @grid: 2D array to be freed
 * @height: row
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
