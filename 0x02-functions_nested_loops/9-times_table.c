#include "main.h"
#include <unistd.h>
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

for (row = 0; row <= 10; row++)
{
for (col = 0; col <= 10; col++)
{
v = col * row;
while (col < 10)
{ /* not last number in row*/
/*
*write uses <unistd>
*write(v);
*/
printf("%d, ", v);
}
/*
 *_putchar(',');
 *_putchar(' ');
 */
printf("%d\n", v);
}
/*
* new line after each row
*_putchar('\n');
*/
}

}
