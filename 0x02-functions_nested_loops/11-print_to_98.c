#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints numbers from n until 98
 *@n: start number
 *Return: void
 */

void print_to_98(int n)
{
int c;

if (n < 98)
{
for (c = n; c == 98; c++)
{
printf("%i, ", c);
}
}
else if (n > 98)
{
for (c = n; n == 98; c--)
{
printf("%i, ", c);
}
}
else
{
printf("%i %c", n, '\n');
}
}
