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

/*for numbers lower and equal to 98*/
if (n < 98 || n == 98)
{
c = n;
while (c < 98)
printf("%d, ", c++);
/*last one*/
printf("%d\n", c);
}

/* for numbers bigger than 98*/
else if (n > 98)
{
c = n;
while (c > 98)
printf("%d, ", c--);
/* last one*/
printf("%d\n", c);
}

}
