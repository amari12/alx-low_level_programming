#include "lists.h"

/**
 * listint_len - returns the nr of elements in the linked list
 * @h: head node
 * Return: size_t length of list
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

