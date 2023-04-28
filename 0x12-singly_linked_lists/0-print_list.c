#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all element of list
 * @h: head node
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	int c = 0;

	while (h != NULL)
	{ /*while the node exists*/
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		c++; /*increase counter*/
	}
	return (c);
}

