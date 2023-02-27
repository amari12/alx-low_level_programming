#include "main.h"
#include <string.h>

/**
 *puts2 - prints every other char of string
 *@str: string
 *Return: void
 */

void puts2(char *str)
{
int i;
int len;

len = strlen(str);
i = 0;

while (i < len)
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');

}
