#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - add node at end of list
 *@head: head node
 *@n: int of new node
 *Return: listint_t / pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

/*assign memory*/
new = malloc(sizeof(listint_t));
/*check if malloc failed*/
if (new == NULL)
return (NULL);

/*assign new node values*/
new->n = n;
new->next = NULL;

if (*head == NULL)
{ /*if list is empty?*/
*head = new;
return (new);
}

/*get to last node to reassign ->next*/
while (temp->next)
temp = temp->next;
/*while temp->next exists, change temp to next node*/
/*when reaches end, exits while loop, assign next to new node*/
temp->next = new;
return (new);
}
