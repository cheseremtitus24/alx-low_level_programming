#include "main.h"
/**
 * alloc_grid- Dynamically allocates a 2d array
 * @width: array column size
 * @height: array row size
 *
 * Description- Returns a 2D array pointer of zero initialized indexes.
 *
 * Return: integer pointer else NULL
 */
int **alloc_grid(int width, int height)
{
	int h, w, j = 0;
	int **dynmemptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	dynmemptr = (int **) malloc((sizeof(int *) * height));
	if (dynmemptr == NULL)
		return (NULL);
	h = 0;

	while (h < height)
	{
		dynmemptr[h] = (int *) malloc(sizeof(int) * width);
		if (dynmemptr[h] == NULL)
		{
			free(dynmemptr);
			for (; j <= h; j++)
			{
				free(dynmemptr[j]);
			}
			return (NULL);
		}
		h++;
	}

	/* Initialize to Zeros*/
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			dynmemptr[h][w] = 0;
			w++;
		}
		h++;
	}
	return (dynmemptr);
}

