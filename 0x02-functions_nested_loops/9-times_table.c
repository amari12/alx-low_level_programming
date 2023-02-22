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

for (row = 0; row <= 9; row++)
{

for (col = 0; col <= 9; col++)
{
v = col * row;

if (col == 0)
printf("%d,", v);

else if (col == 9 && v < 10)
printf("  %d\n", v);

else if (col == 9 && v >= 10)
printf(" %d\n", v);

else if (col < 9 && v < 10)
/* not last number in row and only one digit*/
printf("  %d,", v);

else if (col < 9 && v >= 10)
printf(" %d,", v);
}

}

}
