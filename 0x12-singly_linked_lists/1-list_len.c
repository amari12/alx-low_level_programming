#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *list_len - print nr of elements in linked list list_t
 *@h: head node
 *Return: size_t
 */

size_t list_len(const list_t *h)
{
size_t size = 0;

while (h != NULL)
{
size++;
h = h->next;
}
return (size);
}
