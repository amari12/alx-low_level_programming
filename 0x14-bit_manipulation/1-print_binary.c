#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/*get to front of nr*/
	if (n > 1)
		print_binary(n >> 1);
	/*gives nr without left digit*/
	
	/* &: bitwise operator*/
	/* compares least significant bit of n*/
	/*aka last digit of binary value*/
	if ((n & 1) == 1)
		putchar('1');
	else
		putchar('0');
}

