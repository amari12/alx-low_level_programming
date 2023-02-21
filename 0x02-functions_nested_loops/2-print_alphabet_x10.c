#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *Return: void
 */

void print_alphabet_x10(void)
{
int c;
int t;

for (t = 1; t <= 10; t++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
