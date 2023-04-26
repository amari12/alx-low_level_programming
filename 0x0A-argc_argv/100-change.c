#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: nr of arguments
 * @argv: argumants
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, cents, coins = 0;
	int options[] = { 25, 10, 5, 2, 1 };
	int nr_options;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0) /*negative*/
	{
		printf("0\n");
		return (0);
	}

	nr_options = sizeof(options) / sizeof(options[0]);

	for (i = 0; i < nr_options; i++)
	{
		coins += cents / options[i];
		cents = cents % options[i];
	}
	printf("%d\n", coins);
	return (0);
}

