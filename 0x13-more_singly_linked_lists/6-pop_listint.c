#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - remove head node
 *@head: head node
 *Return: head node value
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int nr;

/*check if list empty*/
if (head == NULL || *head == NULL)
return (0);

/*save temp values*/
temp = (*head)->next;
nr = (*head)->n;
/*free space*/
free(*head);
/*assign new head*/
*head = temp;
/*return removed head's value*/
return (nr);
}
