#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - main function
 *@argc: number of arguments
 *@argv: argument value/array
 *Return: int
 */

int main(int argc, char *argv[])
{
int ia;
int ib;
char *o;

if (argc > 4 || argc < 4)
{ /*nr of arguments is wrong*/
printf("Error\n");
exit(98);
}

ia = atoi(argv[1]);
ib = atoi(argv[3]);
o = argv[2];

if (get_op_func(o) == NULL)
{ /*operator none of mentioned*/
printf("Error\n");
exit(99);
}

if ((*o == '/' && ib == 0) || (*o == '%' && ib == 0))
{ /*if divide or mod by zero*/
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(o)(ia, ib));
return (0);
}

