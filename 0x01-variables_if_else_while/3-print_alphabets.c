#include <stdio.h>
#include <ctype.h>

/**
* main - prints alphabet in lower and upper case
* Return: 0
*/

int main(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}

putchar('\n');
return (0);

}
