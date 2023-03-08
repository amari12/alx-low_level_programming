#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of number
 *@n: number
 *Return: int
 */

int _sqrt_recursion(int n)
{
int i;

i = 0;
if (n == 0 || n == 1)
return (n);
/*else if (i < 0)*/
/*return (-1);*/
else
return (_check(i, n));
}

/**
 *_check - checks for natural root
 *@i: checking/testing this number
 *@n: original number
 *Return: int natural root
 */

int _check(int i, int n)
{
int mult;

mult = i ^ 2;
if (mult < n)
return (_check(i + 1, n));
else if (mult == n)
return (i);
else
return (-1);
}
