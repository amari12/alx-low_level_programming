#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 *string_toupper - changes lowercase letters to uppercase
 *@c: char string
 *Return: char
 */

char *string_toupper(char *c)
{
int i;
int len = strlen(c);

for (i = 0; i < len; i++)
{
if (c[i] <= 'z' && c[i] >= 'a')
c[i] = toupper(c[i]);
}
return (c);
}
