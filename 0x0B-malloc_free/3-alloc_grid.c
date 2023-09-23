#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
int **alloc_grid(int width, int height);
/**
 * alloc_grid -returns a pointer to a 5-dimensional array of int
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: the matrix grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
