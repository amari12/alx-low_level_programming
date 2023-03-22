#include "function_pointers.h"
#include "stdio.h"

/**
 *int_index - searches for int
 *@array: array
 *@size: size of array
 *@cmp: function that compares values
 *Return: int (index for match)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int result;

if (size <= 0)
return (-1);

if (array != NULL)
{
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result == 1)/*found match*/
return (i);
} /*for*/
} /*if*/

/*no match found*/
return (-1);
}
