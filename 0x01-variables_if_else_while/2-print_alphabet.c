#include <stdio.h>
#include <ctype.h>

/**
* main - prints alpahbet case
* Return: 0
*/

int main(void)
{
char letter;

for (int i = 'A'; i <= 'Z'; i++)
{
letter = tolower(i);
putchar(letter);
}
putchar('\n');
return (0);

}
