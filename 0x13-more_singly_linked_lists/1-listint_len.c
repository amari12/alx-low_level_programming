#include "lists.h"

/**
 *listint_len - returns nr of elements in linked list
 *@h: node
 *Return: size_t length of list
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
