#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints all elements of list
 *@h: node
 *Return: size_t number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t size = 0;

while (h) /*while h exists*/
{
size++; /*increment size*/
printf("%i\n", h->n); /*print int*/
h = h->next; /*move to next node*/
}
return (size); /*return size of list*/
}
