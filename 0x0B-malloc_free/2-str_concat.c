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
int len1;
int len2;
int i;
char *str;

if (s1 == NULL)
s1 = "";
if (s1 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

str = malloc((len1 + len2 + 1) * sizeof(char));

if (str)
{
if (len1 > 0)
{
for (i = 0; i < len1; i++)
{/*first part/string*/
str[i] = s1[i];
}
}
if (len2 > 0)
{
for (i = len1; i < len2 + len1; i++)
{/*2nd part/string*/
str[i] = s2[i - len1];
}
}
str[i] = '\0';

return (str);
}
else /*malloc failed*/
{
return (NULL);
}

}
