#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees 2d grid created in alloc_grid
 *@grid: grid from alloc_grid
 *@height: height/rows
 *Return: int
 */

int free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return (1);

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
grid = NULL; /*free pointer*/
return (0);
}

