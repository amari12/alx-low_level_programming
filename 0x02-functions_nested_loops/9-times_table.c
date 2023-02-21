#include "main.h"

/**
 *times_table - print the 9 times table
 *Return: void
 */

void times_table(void)
{
int r;
int c;
int v;

for (r = 0; r < 10; r++)
{
for (c = 0; c < 10; c++)
{
v = c * r;
_putchar(v);
}
_putchar('\n');
}

}
