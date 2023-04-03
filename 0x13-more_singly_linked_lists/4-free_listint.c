#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - frees a list
 *@head: head of list
 *Return: void
 */

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
/*save second node*/
temp = head->next;
/*free*/
/*free(head->n);*/
free(head);
/*move head to next node*/
head = temp;
}
}
