#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - executes function on each element of array
 *@array: array
 *@size: size of array
 *@action: pointer to function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

}
