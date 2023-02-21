#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *Return: void
 */

void print_alphabet_x10(void)
{
int c;
int val;

for (c = 'a'; c <= 'z'; c++)
{
val = c * 10;
_putchar(val);
}

}
