#include "main.h"

/**
 *jack_bauer - print every minute of the day of Jack
 *Return: void
 */

void jack_bauer(void)
{
int h;
int m;

for (h = 00; h < 24; h++)
{
for (m = 00; m < 60; m++)
{
_putchar(h / 10);
_putchar(h % 10);
_putchar(':');
_putchar(m / 10);
_putchar(m % 10);
}
_putchar('\n');
}
}
