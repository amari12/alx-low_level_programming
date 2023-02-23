#include "main.h"

/**
 *print_triangle - prints triangle
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
int c;
int r;
int p;

if (size <= 0)
_putchar('\n');
else
{
for (r = 1; r <= size; r++)
{
for (c = 1; c <= size; c++)
{
p = size - r;
if (c <= p)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');

}
}
}
