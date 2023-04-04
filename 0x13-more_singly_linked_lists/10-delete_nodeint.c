#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes node at index
 *@head: head node
 *@index: position
 *Return: int (1 pass -1 fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current = *head, *temp;

/*check if list is empty*/
if (head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(current);
return (1);
}
/*loop through*/
for (i = 0; current->next != NULL; i++)
{
if (i + 1 == index)
{ /*next node is supposed to be deleted*/
temp = (current->next)->next; /*save node after node to del*/
free(current->next); /*remove next node*/
current->next = temp; /*add link again*/
return (1);
}
else
{
current = current->next;
}
}
/*if all fails*/
return (-1);
}
