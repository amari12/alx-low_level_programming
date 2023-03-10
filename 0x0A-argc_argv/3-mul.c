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
int a = 0;
int b = 0;

/*a = atoi(argv[1]);*/
/*b = atoi(argv[2]);*/

/*a = argv[1] - '0';*/
/*b = argv[2] - '0';*/

if (argc >= 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", (a * b));
}
else
{
printf("Error\n");
}
return (0);
}
