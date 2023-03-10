#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies 2 numbers
 *@argc: nr of arguments
 *@argv: arguments
 *Return: int 0
 */

int main(int argc, char *argv[])
{
int a;
int b;

/*a = atoi(argv[1]);*/
/*b = atoi(argv[2]);*/

/*a = argv[1] - '0';*/
/*b = argv[2] - '0';*/

a = strtol(argv[1], NULL, 10);
b = strtol(argv[2], NULL, 10);

if (argc >= 3)
{
printf("%d", (a * b));
}
else
{
printf("Error\n");
}
return (0);
}
