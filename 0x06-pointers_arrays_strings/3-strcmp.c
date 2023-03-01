#include "main.h"
#include <string.h>

/**
 *_strcmp - compares two strings
 *@s1: string 1
 *@s2: string 2
 *Return: int (if s1 is smaller -, if s2 is smaller +, equal 0)
 */

int _strcmp(char *s1, char *s2)
{
int result;
int len1;
int len2;
int total;

len1 = strlen(s1);
len2 = strlen(s2);
result = len1 - len2;
total = len1 + len2;

if (result < 0)
return (-total);
else if (result > 0)
return (total);
else
return (0);

}
