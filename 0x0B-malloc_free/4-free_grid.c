#include "main.h"
/**
 * free_grid- Deallocates Dynamically allocated Memory
 * @grid: 2D array to Deallocate Dynamic Memory
 * @height: Number of 1D dynamically Allocated memory Arrays
 *
 * Description- Frees the Memory Allocated for a 2D Array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height == 0)
		return;
	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}

