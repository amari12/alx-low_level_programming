#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - returns nth node
 *@head: head node
 *@index: node nr
 *Return: listint_t node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

/*check if list empty*/
if (head == NULL)
return (0);

/*assign current as head/first node*/
current = head;

/*go through list and check*/
for (i = 0; current != NULL; i++)
{
if (i == index)
return (current);
/*if not match, go to next node*/
current = current->next;
}

/*if no match found*/
return (NULL);
}
