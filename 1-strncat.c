#include "main.h"
#include <string.h>

/**
 *_strncat - adds src to dest (only n chars from src)
 *@dest: 1st string
 *@src: 2nd string
 *@n: number of chars from src to add to dest
 *Return: char pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
int src_position;
int i;
int dest_len;

dest_len = strlen(dest);
src_position = 0;
/* dest_len - 1 = string without \0 at end*/

for (i = dest_len; i <= dest_len - 1 + n; i++)
{

dest[i] = src[src_position];

src_position++;
}
return (dest);

}
