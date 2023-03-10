#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - add positive numbers
 *@argc: nr of args
 *@argv: arguments
 *Return: int
 */

int main(int argc, char *argv[])
{
int i;
unsigned int n;
int val;
char *c;
int sum;

if (argc < 2)
return (0);

for (i = 0; i < argc; i++)
{
c = argv[i];
val = atoi(c);
/*check for chars that are not numbers*/
for (n = 0; n < strlen(c); n++)
{
if (c[n] < 48 || c[n] > 57)
{
printf("Error\n");
return (1);
}
}
sum += val;
}
return (sum);

}
