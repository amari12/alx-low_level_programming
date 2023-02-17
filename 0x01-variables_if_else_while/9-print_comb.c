#include <stdio.h>

/**
 *main - print all combos of single digit numbers
 *Return: 0
 */

int main(void)
{
int i;
int r;

for (i = '0'; i <= '9'; i++)
{
for (r = '0'; r <= '9'; i++)
{
putchar(i);
putchar(r);
}
}
putchar('\n');
return (0);
}
