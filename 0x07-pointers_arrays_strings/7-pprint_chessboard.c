#include "main.c"

/**
 *print_chessboard - prints chessboard
 *@a: rows
 *Return: void
 */

void print_chessboard(char (*a)[8])
{
int row;
int col;

for (row = 0; row < a; row++)
{
for (col = 0; col <8; col++)
{
_putchar(a[row][col];
}
}
return ();
}
