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
char *str;

if (s1 == NULL)
s1 = "";
if (s1 == NULL)
s2 = "";

str = malloc((len1 + len2 + 1) * sizeof(char));

if (str)
{
for (i = 0; i < (len1 + len2); i++)
{
if (i < len1)
str[i] = s1[i];
else if (i >= len1 && i < (len1 + len2))
str[i] = s2[i];
}
str[i] = '\0';

return (str);
}
else
{
return (NULL);
}

}
