#include "main.h"

/**
 *factorial - return factorial of number
 *@n: number given
 *Return: if n<0=-1, factorial int
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
