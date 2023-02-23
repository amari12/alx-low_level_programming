#include "main.h"

/**
 *more_numbers - prints 10 times the numbers 0 - 14 with a new line
 *Return: void
 */

void more_numbers(void)
{
int r;
int c;
int i;

for (r = 0; r <= 10; r++)
{
for (c = 0; c <= 14; c++)
{
if (c < 10)
_putchar(c + '0');
else
{
i = c % 10;
/*      _putchar('1');*/
_putchar('1' + i);
}
}
_putchar('\n');
}
}
