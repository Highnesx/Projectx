#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: parameter 1
 * @height: parameter 2
 * Return: void
*/

void free_grid(int **grid, int height)
{

	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
