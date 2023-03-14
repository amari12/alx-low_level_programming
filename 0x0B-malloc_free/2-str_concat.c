#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concats two strings
 *@s1: string 1
 *@s2: string 2
 *Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
int len1 = strlen(s1);
int len2 = strlen(s2);
int i;

char *p = (char *)malloc((len1 + len2 + 1) * sizeof(char));

if (p)
{
for (i = 0; i < (len1 + len2); i++)
{
if (i > len1)
p[i] = s2[i];
else
p[i] = s1[i];
}
p[i] = '\0';

return (p);
}
else
{
return ('\0');
}

}
