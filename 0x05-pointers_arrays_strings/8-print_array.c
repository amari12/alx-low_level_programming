#include "main.h"
#include <stdio.h>

/**
 *print_array - prints number of ints from array
 *@a: array
 *@n: number of elements to print
 *Return: void
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}
