#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *@n: number of _
 *Return: void
 */

void print_line(int n)
{
int c;

c = 1;
if (n > 0)
{
while (c <= n)
{
_putchar('_');
c++;
}
_putchar('\n');
}
else
_putchar('\n');

}
