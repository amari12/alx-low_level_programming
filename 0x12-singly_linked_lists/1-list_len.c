#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of elements
 * @h: head node pointer
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
