#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns the pointer to the grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: returns the pointer
 */

int **alloc_grid(int width, int height)
{
	int **thegrid;
	int x, y;

	if (width <= 0 || height <= 0)
	return (NULL);

	thegrid = (int **)malloc(height * sizeof(int *));
	if (thegrid == NULL)
	return (NULL);

	for (x = 0; x < height; x++)
	{
	thegrid[x] = (int *)malloc(width * sizeof(int));
	if (thegrid[x] == NULL)
	{
	for (y = 0; y < x; y++)
	free(thegrid[y]);
	free(thegrid);
	return (NULL);
	}

	for (y = 0; y < width; y++)
	thegrid[x][y] = 0;
	}
	return (thegrid);
}
