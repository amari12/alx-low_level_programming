#include <stdio.h>
#include <ctype.h>

/**
* main - prints alphabet in lower and upper case
* Return: 0
*/

int main(void)
{
char letter;
int i;
string ans;

for (i = 'a'; i <= 'z'; i++)
{
letter = i;
ans = ans + letter;
}

for (i = 'a'; i <= 'z'; i++)
{
letter = toupper(i);
ans = ans + letter;
}

putchar('ans');
putchar('$');
putchar('\n');
return (0);

}
