#include "main.h"

/**
 *reverse_array - reverses array of ints
 *@a: array
 *@n: number of elements of the array
 *Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int hold;
int halfway;

halfway = n / 2;

for (i = 0; i < halfway; i++)
{
hold = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = hold;
}
}
