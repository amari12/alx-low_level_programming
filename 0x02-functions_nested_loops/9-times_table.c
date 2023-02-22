#include "main.h"
#include <stdio.h>

/**
 *times_table - print the 9 times table
 *Return: void
 */

void times_table(void)
{
int row;
int col;
int v;

for (row = 0; row < 11; row++)
{

for (col = 0; col < 11; col++)
{
v = col * row;

if (col < 10)
/* not last number in row*/
printf("%d,\t", v);
else
printf("%d\n", v);
}

}

}
