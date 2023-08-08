#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2d array
 * @width: parameter 1
 * @height: parameter 2
 * Return: int
*/

int **alloc_grid(int width, int height)
{

		int **result;
		int x, y;

		if (width <= 0 || height <= 0)
		return (NULL);

		result = malloc(sizeof(int *) * height);
			if (result == NULL)
			return (NULL);

		for (x = 0; x < height; x++)
		{
		result[x] = malloc(sizeof(int) * width);
				if (result[x] == NULL)
				{
					free(result);
					for (y = 0; y <= height; y++)
						free(result[y]);
					return (NULL);
				}
				for (y = 0; y < width; y++)
					result[x][y] = 0;
		}
		return (result);
}
