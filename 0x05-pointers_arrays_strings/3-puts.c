#include "main.h"

/**
 *_puts - prints string followed by new line to stdout
 *@str: string
 *Return: void
 */

void _puts(char *str)
{
int i;
/*int len;*/

/*len = _strlen(str);*/

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
