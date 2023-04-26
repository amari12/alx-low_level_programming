#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns pointer to 2D array of ints
 *@width: cols
 *@height: rows
 *Return: int
 */

int **alloc_grid(int width, int height)
{
int row, col, i;
int **arr;

/*check if height/width is zero*/
	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

for (row = 0; row < height; row++)
{
/*assign each row /1D array a pointer?*/
arr[row] = malloc(width * sizeof(int));
if (arr[row] == NULL)
{ /*free prev assigned memory*/
	for (i = 0; i < row; i++)
		free(arr[i]);
	free(arr);
	return (NULL);
}
/*intialise all elements with 0*/
for (col = 0; col < width; col++)
{
arr[row][col] = 0;
}
}
return (arr);
}

