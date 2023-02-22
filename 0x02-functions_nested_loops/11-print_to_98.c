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

if (n <= 98)
{
c = n;
while (c < 98)
printf("%d, ", c--);
printf("%d\n", c);
}

else if (n > 98)
{
c = n;
while (c > 98)
printf("%d, ", c--);
printf("%d\n", c);
}

}
