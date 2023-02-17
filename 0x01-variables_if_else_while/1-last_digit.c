#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - print last digit of random number
* Return: 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

int last;

last = n % 10;

if (last < 6 && last != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
else if (last > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of %i is %i and is0\n", n, last);

return (0);
}
