#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - insert node at index
 *@head: head node
 *@idx: position
 *@n: value
 *Return: listint_t node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *new, *current = *head, *prev = NULL;
unsigned int i;

/*assign memory*/
new = malloc(sizeof(listint_t));
/*check if malloc failed*/
if (new == NULL)
return (NULL);
/*assign value*/
new->n = n;
/*check if list empty and if idx is 0*/
if (*head == NULL && idx == 0)
{
*head = new;
new->next = NULL;
return (new);
}
/*if list empty and idx is not 0*/
if (*head == NULL && idx != 0)
return (NULL);
for (i = 0; current != NULL; i++)
{ /*loop through list to find node/index*/
if (i == idx)
{ /*match found-redo links / next and add int value*/
prev->next = new;
new->next = current;
new->n = n;
return (new);
}
else
{ /*move to next node, save prev node*/
temp = current;
current = current->next;
prev = temp;
}
}
/*could not find*/
return (NULL);
}
