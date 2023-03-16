#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - create array of ints
 *@min: inlcude ints bigger than min
 *@max: include ints smaller than max
 *Return: int pointer
 */

int *array_range(int min, int max)
{
int *p;
int i;
int count = 0;
int start = min;

if (min > max)
return (NULL);

while (start <= max)
{
start = start + 1;
count = count + 1;
}

p = malloc(sizeof(int) * count);

if (p == NULL)
return (NULL);
else
{
start = min;
for (i = 0; i < count; i++)
{
p[i] = start;
start = start + 1;
}
return (p);
}
}
