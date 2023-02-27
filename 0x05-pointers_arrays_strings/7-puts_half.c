#include "main.h"
#include <string.h>

/**
 *puts_half - prints last half of string
 *@str: string
 *Return: void
 */

void puts_half(char *str)
{
int i;
int len;
int h;

len = strlen(str);
h = (strlen(str) - 1) / 2;

if (len % 2 == 0)
{
for (i = (len / 2); i < len; i++)
_putchar(str[i]);
}
else
{
for (i = h + 1; i < len; i++)
_putchar(str[i]);
}
_putchar('\n');
}
