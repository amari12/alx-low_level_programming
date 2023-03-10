#include "main.h"
#include <stdio.h>

/**
 *main - prints nr of arguments
 *@argc: nr of arguments
 *@argv: arguments
 *Return: int 0
 */

int main(int argc, char *argv[])
{
(void) argv;

printf("%d\n", argc - 1);
return (0);
}
