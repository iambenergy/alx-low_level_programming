#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - It returns a pointer to a 2 dimensional array of integers
 * @width: function input for width of array argument
 * @height: function input for height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, x, y;
	int val = width * height;

	if (val < 1)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = (int *)malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	return (ptr);
}
