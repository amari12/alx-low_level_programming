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
int row, col;
int **arr;

/*check if height/width is zero*/
if (width == 0 || height == 0)
return (NULL);

arr = (int **)malloc(height * sizeof(int));

if (arr)
{/*check if it worked then initialise with 0s*/
for (row = 0; row < height; row++)
{
/*assign each row /1D array a pointer?*/
arr[row] = (int *)malloc(width * sizeof(int));

for (col = 0; col < width; col++)
{
arr[row][col] = 0;
}
}
return (arr);
}

else
{/*return null on failure*/
return (NULL);
}

}
