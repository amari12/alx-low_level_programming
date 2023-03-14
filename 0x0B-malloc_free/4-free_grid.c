#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees 2d grid created in alloc_grid
 *@grid: grid from alloc_grid
 *@height: height/rows
 *Return: void
 */

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);

}
