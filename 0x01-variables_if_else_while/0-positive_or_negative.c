#include <stdlib.h>
#include <time.h>

/**
*main - checks if random number is positive or negative
*Return: 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%f is positive\n", n);
}
else if (n < 0)
{
printf("%f is negative\n", n);
}
else
{
printf("%f is zero\n", n);
}
return (0);
}
