#include "lists.h"

/**
 *pop_listint - remove head node
 *@head: head node
 *Return: head node value
 */

int pop_listint(listint_t **head)
{
listint_t *temp;

/*check if list empty*/
if (head == NULL)
return (0);

/*save value*/
temp = *head;
/*make next node the new head*/
*head = (*head)->next;
/*return removed head's value*/
return (temp->n);
}
