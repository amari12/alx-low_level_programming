#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create array oc chars and init with char
 *@size: size of array
 *@c: char for first position
 *Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
int i;

if (size == 0)
return ('\0');
else
{
char *p = (char *)malloc(size * sizeof(char));

if (p)
{
for (i = 0; i < (int)size; i++)
{
p[i] = c;
}
}
else
{
return ('\0');
}
return (p);
}

}
