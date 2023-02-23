#include "main.h"

/**
 *print_diagonal - draws diagonal line
 *@n: number of \
 *Return: void
 */

void print_diagonal(int n)
{
int i;
int s;

if (n == 0)
_putchar('\n');
else
{
for (i = 1; i <= n; i++)
{

for (s = 1; s <= i; s++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');
}
}
}
