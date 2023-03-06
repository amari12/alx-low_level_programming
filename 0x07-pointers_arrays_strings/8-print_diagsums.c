#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sums of two diagonals of a matrix
 *@a: array
 *@size: size of array
 *Return: void
 */

void print_diagsums(int *a, int size)
{
int sum1;
int sum2;
int diag1;
int diag2;

sum1 = 0;
sum2 = 0;

for (diag1 = 0; diag1 < size; diag1++)
{
sum1 = sum1 + a[diag1 * size + diag1];
}

for (diag2 = size - 1; diag2 >= 0; diag2--)
{
sum2 = sum2 + a[diag2 * size + (size - diag2 - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
