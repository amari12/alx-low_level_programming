#include "main.h"

/**
 *is_prime_number - test if number is prime nr
 *@n: number
 *Return: 1 if prime nr, 0 if not
 */

int is_prime_number(int n)
{
if (n == 2 || n == 3)
return (1);
else if (n % n != 0)
return (0);
else if (n < 2 || n % 2 == 0 || n % 3 == 0)
return (0);
else
return (1);
}
