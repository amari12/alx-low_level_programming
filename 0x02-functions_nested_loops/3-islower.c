#include "main.h"

/**
 *_islower - returns 1 if lowercase and 0 if not
 *@c: entered char
 *Return: int
 */

int _islower(int c)
{
int ans;

if (c >= 'a' && c <= 'z')
ans = 1;
else
ans = 0;

return (ans);
}
