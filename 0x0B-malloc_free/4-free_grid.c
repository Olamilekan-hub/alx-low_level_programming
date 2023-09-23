#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory space allocated/reserved by malloc
 * @grid: double pointer to the memory to be freed
 * @height: helps loop through the memory
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
