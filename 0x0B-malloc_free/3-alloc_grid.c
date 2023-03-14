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
int h = height;
int w = width;
int length = h * w;
int array[height][width];

/*check if height/width is zero*/
if (width == 0 || height == 0)
return (NULL);

int **p = (int **)calloc(length, sizeof(int));
*p = &array[0][0];

if (p)
{/*check if it worked*/
/*initialise with 0s*/
for (row = 0; row < height; row++)
{
for (col = 0; col < width; col++)
{
array[row][col] = 0;
}
}
return (p);
}
else
{/*return null on failure*/
return (NULL);
}

}
