#include "main.h"
#include <string.h>

/**
 *_strstr - finds substring in main string
 *@haystack: main string
 *@needle: substring
 *Return: char pointer to first char of substring
 */

char *_strstr(char *haystack, char *needle)
{
int ihaystack;
int ineedle;
int lenhaystack;
int lenneedle;
int match;

lenhaystack = strlen(haystack);
lenneedle = strlen(needle);
match = 0;

for (ihaystack = 0; ihaystack < lenhaystack; ihaystack++)
{
for (ineedle = 0; ineedle < lenneedle; ineedle++)
{
if (haystack[ihaystack] == needle[ineedle] && match < lenneedle)
{
match = match + 1;
}
else if (match == lenneedle)
{
return (&haystack[ihaystack - match]);
}
}
match = 0;
}
return ('\0');

}
