#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *free_list - frees list list_t
 *@head: head node of list
 *Return: void
 */

void free_list(list_t *head)
{
list_t *current;

while ((current = head) != NULL)
{
head = head->next;
free(current->str);
free(current);
}
}
