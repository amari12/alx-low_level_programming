#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocates memory of array using malloc
 *I assume they mean calloc
 *@nmemb: array length
 *@size: size of bytes
 *Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;

if (nmemb == 0 || size == 0)
return (NULL);

p = calloc(nmemb, size);

if (p == NULL)
return (NULL);
else
{
p = 0;
return (p);
}

}
