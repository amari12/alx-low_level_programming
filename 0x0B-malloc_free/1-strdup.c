#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - return pointer to new allocated space w/ string copy
 *@str: string to copy
 *Return: char pointer
 */

char *_strdup(char *str)
{
int len = strlen(str);
int i;

if (str == NULL)
return (NULL);

else /*if not null*/
{
char *p = (char *)malloc((len * sizeof(char)) + 1);

/*check if succesful*/
if (p)
{
/*copy string*/
for (i = 0; i < len; i++)
{
p[i] = str[i];
}
return (p);
}
else
{
return (NULL);
}
}

}
